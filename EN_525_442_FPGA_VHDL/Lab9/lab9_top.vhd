library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use work.all;
--Lab9 Top
--Analyzes the accuracy of the 50 MHz oscillator to a known 1PPS signal
--clk_50				STD_LOGIC input	50 MHz clock
--clk_32				STD_LOGIC input	32 MHz clock
--sliderSwitches 	STD_LOGIC_VECTOR 8-bit determines the value to be displayed
--pushButton		STD_LOGIC	pushButton0 used for reset
--led					STD_LOGIC	used to display the sign of the offset
--anodes				STD_LOGIC_VECTOR	4-bit used to activate the displays
--seg7				STD_LOGIC_VECTOR	7-bit used to turn on segments to display values
Entity lab9_top is
Port
(
		clk_50:				IN		STD_LOGIC;
		clk_32:				IN		STD_LOGIC;
		sliderSwitches:	IN		STD_LOGIC_VECTOR(7 downto 0);
		pushButton:			IN		STD_LOGIC;
		led:					OUT	STD_LOGIC;
		anodes:				OUT	STD_LOGIC_VECTOR(3 downto 0);
		seg7:					OUT	STD_LOGIC_VECTOR(6 downto 0)
); end lab9_top;

Architecture Behavioral of lab9_top is
	SIGNAL	reset:			STD_LOGIC;
	SIGNAL	PPS32:			STD_LOGIC;
	SIGNAL	PPS50:			STD_LOGIC;
	SIGNAL	clear:			STD_LOGIC;
	SIGNAL	toDisplay:		STD_LOGIC_VECTOR(15 downto 0);
	SIGNAL	lastCount:		unsigned(25 downto 0);
	SIGNAL	currentCount:	unsigned(25 downto 0);
	SIGNAL	minOffset:		unsigned(15 downto 0);
	SIGNAL	maxOffset:		unsigned(15 downto 0);
	SIGNAL	offset:			signed(15 downto 0);
	SIGNAL	ppsCount:		unsigned(15 downto 0);
	SIGNAL	toLatch:			STD_LOGIC;
begin
	--Instantiation of the 1PPS generator
	PPSGEN:		Entity work.OnePPSgenerator Port map (clk_32,reset,PPS32);
	--Debouncer for pushButton0
	PB0DB:		Entity work.debouncer Port map (clk_50,pushButton,reset);
	--Shift Register for syncronizing the PPS signal
	SYNC:			Entity work.shiftRegister Port map (clk_50,reset,PPS32,PPS50);
	--7-segment driver used to display values of interest
	SEG7DRVR:	Entity work.seg7_driver Port map (clk_50,reset,toDisplay(3 downto 0),toDisplay(7 downto 4),toDisplay(11 downto 8), toDisplay(15 downto 12),anodes,seg7);
	--26-bit counter for the number of 50MHz pulses in the 1PPS signal
	COUNTER:		Entity work.upCounter Generic map(n=>26) Port map (clk_50,'1',clear,currentCount);
	--16-bit counter for counting the number of 1PPS pulses
	PPSCOUNTER:	Entity work.upCounter2 Generic map(n=>16) Port map (clk_50,PPS50,reset,ppsCount);
	
	--Process to latch last count and different values of interest
	process(reset,clk_50,PPS50) is
	begin
		--Resets the lastCount,offset,minOffset, and maxOffset 
		if(reset='1') then
			--clears lastCount
			lastCount<=(others=>'0');
			--clears offset
			offset<=(others=>'0');
			--Sets minOffset to FFFF which is the highest value for a 16-bit unsigned value
			minOffset<=x"FFFF";
			--sets maxOffset to 0000 which is lowest value for a 16-bit unsigned value
			maxOffset<=(others=>'0');
			--sets toLatch to '0'.  used to latch signal on rising edge of 1PPS signal
			toLatch<='0';
		else
			--Latches the lastCount as well as other values of interest
			if(rising_edge(clk_50)) then
				if(PPS50='1') then
					if(toLatch='1') then
						lastCount<=currentCount;
						--offset gets assigned 49999999 - lastCount
						offset<=resize((signed(49999999 - lastCount)),16);
						--If absolute offset is greater than the last maxOffset, update maxOffset
						if(unsigned(abs(offset))>maxOffset) then 
							maxOffset<=unsigned(abs(offset));
						--if the absolute offset is less than the last minOffset, update minOffset
						elsif((unsigned(abs(offset))<minOffset) AND NOT(offset=0)) then
							minOffset<=unsigned(abs(offset));
						end if;
						toLatch<='0';
						clear<='1';
					end if;
					if(clear='1') then
						clear<='0';
					end if;
				elsif(PPS50='0') then
					toLatch<='1';
				end if;
			end if;
		end if;
	end process;
	

	--Uses sliderSwitches to select value to be displayed
	with sliderSwitches select toDisplay <=
		--displays bottom 15-bits of the running count when sliderSwitches all low
		STD_LOGIC_VECTOR(lastCount(15 downto 0)) when "00000000",
		--displays top 10-bits of the running count when sliderSwitch0 is high
		"000000" &STD_LOGIC_VECTOR(lastCount(25 downto 16)) when "00000001",
		--displays the signed offset when sliderSwitch1 is high
		STD_LOGIC_VECTOR(offset) when "00000010",
		--displays the absolute offset when sliderSwitch1 and sliderSwitch0 are high
		STD_LOGIC_VECTOR(abs(offset)) when "00000011",
		--displays minOffset when sliderSwitch2 is high
		STD_LOGIC_VECTOR (minOffset) when "00000100",
		--display maxOffset when sliderSwitch2 and sliderSwitch0 are high
		STD_LOGIC_VECTOR(maxOffset) when "00000101",
		--display ppsCount when sliderSwitch2 and sliderSwitch1 are high
		STD_LOGIC_VECTOR(ppsCount) when "00000110",
		(others=>'0') when others;
	--Led displays the sign of the offset	
	led<=offset(15);
		
end Behavioral;
