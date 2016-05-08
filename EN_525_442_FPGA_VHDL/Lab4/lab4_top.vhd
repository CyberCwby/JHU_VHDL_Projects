library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use work.all;




entity lab4_top is 
port (
		clk_50: 					IN 	STD_LOGIC; 								--50MHz Clock
		pushButtons:			IN 	STD_LOGIC_VECTOR(3 downto 0); 	--Push Buttons used to select function(display Read Address, Reset, or perform Read)
		sliderSwitches:		IN 	STD_LOGIC_VECTOR(7 downto 0); 	--8 slider switches to set Read Address
		seg7:						OUT 	STD_LOGIC_VECTOR(6 downto 0); 	--encoded character to be displayed on 7-segment
		an:						OUT	STD_LOGIC_VECTOR(3 downto 0); 	--	Active anode display
		RAM_Adr: 				OUT	STD_LOGIC_VECTOR(23 downto 1); 	-- Address
		RAM_OEb: 				OUT	std_logic;								-- Output Enable
		RAM_WEb: 				OUT	std_logic;								-- Write Enable
		RAMAdv: 					OUT	std_logic; 								-- Address Valid
		RAMClk: 					OUT	std_logic; 								-- RAM clock
		RAMCre: 					OUT	std_logic; 								-- 
		RAM_CEb: 				OUT	std_logic; 								-- Chep Enable
		RAM_LB: 					OUT	std_logic; 								-- Lower Byte
		RAM_UB: 					OUT	std_logic; 								-- Upper Byte
		RAM_data: 				INOUT	std_logic_vector (15 downto 0)	-- Bidirectional data
);
end entity lab4_top;

Architecture Behavioral of lab4_top is
		signal cntr:					unsigned(10 downto 0);				-- 11-bit Counter signal to increment write address and data
		signal writeToRAM:			STD_LOGIC;								-- Controls when data is writen to RAM
		signal sigToWrite:			STD_LOGIC_VECTOR(15 downto 0);	-- Data to be written to the RAM address
		signal sigToDisplay:			STD_LOGIC_VECTOR(15 downto 0);	-- Data to be displayed
		signal RAM_WEB_int:			STD_LOGIC;								-- Signal to delay the Write Enable
		signal dataFromRAM:			STD_LOGIC_VECTOR(15 downto 0);	-- Latched signal for the last data read from RAM
		signal lessThan:				STD_LOGIC;								-- Signal used in compare
begin
		--Up Counter entity to perform the write operations
		UPCNTR:		entity	work.upCounter Port map(clk_50,pushButtons(0),cntr);
		-- Seven Segment driver to display the different values to the 4 displays
		SEG7DRVR:	entity	work.seg7_driver Port map(clk_50,pushButtons(0),sigToDisplay(3 downto 0),sigToDisplay(7 downto 4),sigToDisplay(11 downto 8),sigToDisplay(15 downto 12),an,seg7);

		--Activates the writeToRAM while the counter is less than 1024 then turns it off
		writeToRam<='1' when (cntr<"10000000000") else '0';
		--Sets the RAM Output enable to '1' while the counter is less than 1024 then '0'  
		RAM_OEb <='1' when (cntr<"10000000000") else '0';
		--Sets the top Address bits to '0' since they will not be used for this project
		RAM_Adr(23 downto 9)<=(others=>'0');
		--Sets RAMAdv,RAMCre,RAM_LB,RAM_UB,RAM_CEb, and RAMClk to '0'
		RAMAdv<='0';
		RAMCre<='0';
		RAM_LB<='0';
		RAM_UB<='0';
		RAM_CEb<='0';
		RAMClk<='0';
		--Stores the hex 'Ad' in the top bits of the signalToWrite
		sigToWrite(15 downto 8)<= "10101101";
		--sets the lower 8 bits of signalToWrite to the counter value
		sigToWrite(7 downto 0)<=STD_LOGIC_VECTOR(cntr(9 downto 2));
		--Sets the RAM_Data to the sigToWrite while the writeToRAM is active otherwise it's high
		--impedence to allow the RAM to set it
		RAM_Data <=
			sigToWrite when (writeToRAM='1') else (others=>'Z');
		--uses Less than to compare the lowest 2-bits of the couter to 2
		--then NANDS that with the writeToRAM bit to set an intermediate write enable bit
		lessThan<=
			'1' when (cntr(1 downto 0)<="10") else '0';
		RAM_WEb_int<= lessThan NAND writeToRAM;
		
		--sets the lowest bits of the RAM_Adr to either the Counter value or the slider switches
		RAM_Adr(8 downto 1) <=
			std_logic_vector(cntr(9 downto 2)) when (writeToRAM='1') else sliderSwitches;
		
		-- Process to latch last data from the RAM when not reset
		-- When pushButton(1) is high a read from the data will occur and the
		-- value will be latched into the dataFromRAM signal
		STORELASTDATA: process (pushButtons(0),clk_50)
		begin
			if(pushButtons(0)='1') then
				dataFromRAM<=(others=>'0');
			else
				if(rising_edge(clk_50)) then
					if pushButtons="0010" then
						if writeToRAM='0' then
							dataFromRAM<=RAM_Data;
						end if;
					end if;
				end if;
			end if;
		end process;
		
		--Process to delay the Write-enable bit until the falling edge of the clock
		SETWEB: process (clk_50)
		begin
			if(falling_edge(clk_50)) then
				RAM_WEb<=RAM_WEb_int;
			end if;
		end process;
		
		--Selects either the address read by the slider switches or the last 
		--value read from RAM using pushButton(2)
		with pushButtons select
		sigToDisplay<= (15 downto 8 =>'0') & sliderSwitches when "0100",
							 dataFromRAM when others;
			
			

end Behavioral;