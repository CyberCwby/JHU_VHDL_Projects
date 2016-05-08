library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use work.all;

--Finite State Machine implementation of a SDRAM Controller
--CLK_50				INPUT		STD_LOGIC				50MHz Clock
--pushButtons		INPUT		STD_LOGIC_VECTOR		2-bit vector for pushButtons
--seg7				OUTPUT	STD_LOGIC_VECTOR		7-bit signal for 7-seg display
--an					OUTPUT	STD_LOGIC_VECTOR		4-bit signal for selecting active display
--RAM_Adr			OUTPUT	STD_LOGIC_VECTOR		24-bit RAM Address--bit 0 not used
--RAM_OEb			OUTPUT	STD_LOGIC				Output enable
--RAM_WEb			OUTPUT	STD_LOGIC				Write Enable
--RAMAdv				OUTPUT	STD_LOGIC				Address valid
--RAMClk				OUTPUT	STD_LOGIC				RAM clock
--RAMCre				OUTPUT	STD_LOGIC
--RAM_CEb			OUTPUT	STD_LOGIC				Chep Enable
--RAM_LB				OUTPUT	STD_LOGIC				Lower Byte
--RAM_UB				OUTPUT	STD_LOGIC				Upper Byte
--RAM_data			OUTPUT	STD_LOGIC_VECTOR		16-bit bidirectional data


Entity lab6_top is port(
		clk_50:					IN		STD_LOGIC; 
		pushButtons:			IN		STD_LOGIC_VECTOR(1 downto 0);
		seg7:						OUT	STD_LOGIC_VECTOR(6 downto 0); 
		an:						OUT	STD_LOGIC_VECTOR(3 downto 0);
		RAM_Adr: 				OUT	STD_LOGIC_VECTOR(23 downto 1); 		-- Address
		RAM_OEb:					OUT	STD_LOGIC;									-- Output Enable
		RAM_WEb: 				OUT	STD_LOGIC;									-- Write Enable
		RAMAdv: 					OUT	STD_LOGIC; 									-- Address Valid
		RAMClk:					OUT	STD_LOGIC; 									-- RAM clock
		RAMCre:			 		OUT	STD_LOGIC; 									-- 
		RAM_CEb:					OUT	STD_LOGIC; 								-- Chep Enable
		RAM_LB: 					OUT	STD_LOGIC; 								-- Lower Byte
		RAM_UB: 					OUT	STD_LOGIC; 								-- Upper Byte
		RAM_data: 				INOUT	STD_LOGIC_VECTOR (15 downto 0)			-- Bidirectional data
); end lab6_top;

Architecture Behavioral of lab6_top is
		signal debouncedPB:							STD_LOGIC_VECTOR(1 downto 0);
		signal cntr:									unsigned(10 downto 0);				-- 11-bit Counter signal to increment write address and data
		signal readCntr:								unsigned(8 downto 0);				-- 8-bit counter signal to increment read address
		signal writeToRAM:							STD_LOGIC;								-- Controls when data is writen to RAM
		signal sigToWrite:							STD_LOGIC_VECTOR(15 downto 0);	-- Data to be written to the RAM address
		signal sigToDisplay:							STD_LOGIC_VECTOR(15 downto 0);	-- Data to be displayed
		signal RAM_WEB_int:							STD_LOGIC;								-- Signal to delay the Write Enable
		signal startFromFSM:							STD_LOGIC;								-- Signal to start incrementing read address
		signal dataFromRAM:							STD_LOGIC_VECTOR(15 downto 0);	-- Latched data read from RAM
		signal lastFromRAM:							STD_LOGIC_VECTOR(15 downto 0);	-- Latched signal for last data read from RAM.  Displayed when read is done
		type 	 statetype is 							(writeRAM,doneWrite,readRAM,doneRead); --States for FSM
		signal curstate: 								statetype;								-- Current state
		signal reset:									STD_LOGIC;								-- Asynchronous reset
		signal startFSMWrite,doneFSMWrite:		STD_LOGIC;								-- Signals to control incrementing write addresses
		signal pulseForRead:							STD_LOGIC;								-- Signal to increment read address
		signal perfRead:								STD_LOGIC;								-- Signal to 
begin
		-- Debouncer for pushButton(1)
		PB1DB: 		entity work.debouncer 		Port map (clk_50,pushButtons(1),debouncedPB(1));
		-- Debouncer for pushButton(0)
		PB0DB: 		entity work.debouncer 		Port map (clk_50,pushButtons(0),debouncedPB(0));
		-- Display data on 7-segment driver
		SEG7DRVR:	entity work.seg7_driver 	Port map (clk_50,reset,sigToDisplay(3 downto 0),sigToDisplay(7 downto 4),sigToDisplay(11 downto 8),sigToDisplay(15 downto 12),an,seg7);
		-- Up counter for incrementing write addresses
		WRITEADDR:		entity work.upCounter 		Port map (clk_50,reset,startFSMWrite,cntr,doneFSMWrite);
		-- Pulse generator to generate 4Hz pulses for incrementing read addresses
		PULSE4HZ:	entity work.pulseGenerator Port map (clk_50,reset,startFromFSM,"101111101011110000100000",pulseForRead);
		--PULSE4HZ:	entity work.pulseGenerator Port map (clk_50,reset,startFromFSM,"000000000000000000101000",pulseForRead);--debug entity for simulation only
		--Up counter for Read Addresses
		READADDR:	entity work.readCounter		Port map (clk_50,reset,pulseForRead,readCntr);
		
		--Asynchronous reset assigned to pushButton(0)
		--reset<=pushButtons(0);	--debug for simulation only
		reset<=debouncedPB(0);
		--Perform Read when pushButton(1) is pressed
		--perfRead<=pushButtons(1); --debug for simulation only
		perfRead<=debouncedPB(1);
		
		--Sets RAMAdv,RAMCre,RAM_LB,RAM_UB,RAM_CEb, and RAMClk to '0'
		RAMAdv<='0';
		RAMCre<='0';
		RAM_LB<='0';
		RAM_UB<='0';
		RAM_CEb<='0';
		RAMClk<='0';
		RAM_Adr(23 downto 9)<=(others=>'0');
		
		--Process to determine current state
		STATELOGIC:	process(clk_50,reset) is
		begin
			--Asynchronous reset to writeRAM state
			if(reset='1') then
				curstate<=writeRAM;
			else
				if(rising_edge(clk_50)) then
					case curstate is
						-- When done Writing RAM move to doneWrite state waiting for pushButton(1) to go high
						when writeRAM=>
							if(doneFSMWrite='1') then
								curstate<=doneWrite;
							end if;
						-- Wait for pushButton(1) to go high
						when doneWrite=>
							if(perfRead='1') then
								curstate<=readRAM;
							end if;
						-- If READADDR is done incrementing, go to doneRead state
						when readRAM=>
							if(reset='1') then
								curstate<=writeRAM;
							elsif(readCntr=256) then
								curstate<=doneRead;
							end if;
						-- Done reading, waiting for reset signal
						when doneRead=>
							if(reset='1') then
								curstate<=writeRAM;
							end if;
					end case;
				end if;
			end if;
		end process;
		
		
		-- Sets writeRam high to perform write
		writeToRAM<='1' when (curstate=writeRAM) else '0';
		-- Sets enable for WRITEADDR up counter
		startFSMWrite<='1' when curstate=writeRAM else '0';
		--Stores the hex 'Ad' in the top bits of the signalToWrite
		sigToWrite(15 downto 0)<= "10101101" & STD_LOGIC_VECTOR(cntr(9 downto 2)) when (curstate=writeRAM) else (others=>'0');
		--sets the lower 8 bits of signalToWrite to the counter value
		RAM_Adr(8 downto 1) <=std_logic_vector(cntr(9 downto 2)) when ((curstate=writeRAM) or (curstate=doneWrite))
			else std_logic_vector(readCntr(7 downto 0)) when ((curstate=readRAM) or (curstate=doneRead));
		--Sets RAM_WEb_int to low when last 2 bits of cntr are less than or equal to 2
		RAM_WEb_int<=not writeToRAM when ((cntr(1 downto 0) <=2) AND (curstate=writeRAM)) else '1';
		
		--Sends the data to RAM when in write state otherwise sets to High impedence
		RAM_Data<=sigToWrite when (curstate=writeRAM) else (others=>'Z');
		--Disables RAM output when not in read state
		RAM_OEb<='1' when (curstate=writeRAM) 
			else'0' when (curstate=readRAM) else '1';
		--Displays all 0's when in write or doneWrite states, current data when in read, last data read when done reading
		sigToDisplay<=(others=>'0') when ((curstate=writeRAM) or (curstate=doneWrite))
			else dataFromRAM when (curstate=readRAM)
			else lastFromRAM when (curstate=doneRead);
		-- Reads the RAM when in read states
		dataFromRAM<=RAM_Data when((curstate=readRAM) or (curstate=doneRead))
			else (others=>'0') when ((curstate=writeRAM) or (curstate=doneWrite));
		--Sets enable for READADDR up counter when in readRAM state
		startFromFSM<='1' when curstate=readRAM else '0';
		
		
		--Process to delay the Write-enable bit until the falling edge of the clock
		SETWEB: process (clk_50) is
		begin
			if(falling_edge(clk_50)) then
				RAM_WEb<=RAM_WEb_int;
			end if;
		end process;
		-- Stores last data to be displayed when in doneRead state
		STORELAST: process(clk_50,curstate) is
		begin
			if(rising_edge(clk_50) and (curstate=readRAM)) then
				lastFromRAM<=dataFromRAM;
			end if;
		end process;
		
End Behavioral;