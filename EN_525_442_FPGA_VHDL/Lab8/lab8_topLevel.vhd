library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;
use work.all;
--Tone generator for Lab 8
--Uses  sliderswitches 2 downto 0 for the frequency
--Uses sliderSwitches 5 downto 3 for the volume
--sliderSwitches:		6-bit STD_LOGIC_VECTOR input.  Top 3-bits are volume, bottom 3-bits are frequency
--clk_50:				STD_LOGIC	50MHz clock
--DACout:				1-bit Digital-Analog-Conversion output for the sinewave
--anodes:				4-bit STD_LOGIC_VECTOR used to activate the display
--seg7:					7-bit STD_LOGIC_VECTOR used to turn on segments to display frequency
Entity lab8_topLevel is
Port(
	sliderSwitches: 	IN 	STD_LOGIC_VECTOR(5 downto 0);
	clk_50:  			IN 	STD_LOGIC;
	DACout:				OUT	STD_LOGIC;
	anodes:				OUT	STD_LOGIC_VECTOR(3 downto 0);
	seg7:					OUT	STD_LOGIC_VECTOR(6 downto 0)
);End Entity;

Architecture Behavioral of lab8_topLevel is
	SIGNAL	CLK2X_OUT: 		STD_LOGIC;
	SIGNAL 	sine:				STD_LOGIC_VECTOR(9 downto 0);
	SIGNAL	shiftedSine:	STD_LOGIC_VECTOR(9 downto 0);
	SIGNAL	phase_in:		STD_LOGIC_VECTOR(3 downto 0);
	SIGNAL	DACin:			STD_LOGIC_VECTOR(9 downto 0);
	SIGNAL	maxCount:		unsigned(13 downto 0);
	SIGNAL	phaseCounter:	unsigned(3 downto 0):="0000";
	SIGNAL	toShift:			integer:=0;
	SIGNAL 	toDisplay:		STD_LOGIC_VECTOR(15 downto 0);
	SIGNAL	enable:			STD_LOGIC;
begin
	--Instantiation of Pulse generator
	SAMPLERATE:	entity work.pulseGenerator generic map(n=>14) Port map (CLK2X_OUT, '0','1',maxCount,enable);
	--Instantiation of 4-bit counter for the phase
	PHASEGEN:	entity work.upCounter generic map(n=>4) Port map (CLK2X_OUT,enable,'0',phaseCounter);
	--Instantiation of the sine LUT
	MYSINELUT: 	entity work.sineLUT 	PORT MAP (CLK2X_OUT,phase_in,sine);
	--DCM to generate a 100MHz clock signal for the sine LUT and DAC
	MYDCM:		entity work.myDCM 	Port map ( clk_50,CLK2X_OUT);
	--DAC used to generate perform the digital to analog conversion
	MYDAC:		entity work.dac 		port map (CLK2X_OUT, '0', DACin, DACout);
	--7-segment driver used to display the frequency of the sine wave
	SEG7DRVR:	entity work.seg7_driver	port map (clk_50,'0',toDisplay(3 downto 0),toDisplay(7 downto 4),toDisplay(11 downto 8),toDisplay(15 downto 12),anodes,seg7);
	--Assigns the phase_in input for the sine LUT
	phase_in<=STD_LOGIC_VECTOR(phaseCounter);
	--Selects the maxCount for the pulseGenerator for the 
	with sliderSwitches(2 downto 0) select maxCount <=
		"00000000000000" when "000", --OHz
		"11000011010100" when "001", --sets maxCount to 12500 to generate 500Hz signal
		"01100001101010" when "010", --sets maxCount to 6250 to generate 1KHz signal
		"01000001010000" when "011", --sets maxCount to 4176 to generate 1.5KHz signal
		"00110000110101" when "100", --sets maxCount to 3125 to generate 2KHz signal
		"00100111000100" when "101", --sets maxCount to 2500 to generate 2.5KHz signal
		"00100000100011" when "110", --sets maxCount to 2083 to generate 3KHz signal
		"00011011111010" when others; --sets maxCount to 1786 to generate 3.5KHz signal
	
	--Sets lower 8-bits to all zeros to display 00 on rightmost displays
	toDisplay(7 downto 0)<=(others=>'0');
	--Sets the top 8-bits to the appropriate frequency for the displays
	with sliderSwitches(2 downto 0) select toDisplay(15 downto 8)<=
		"00000000" when "000",  --00 when 0Hz
		"00000101" when "001",  --05 when 500Hz
		"00010000" when "010",  --10 when 1KHz
		"00010101" when "011",  --15 when 1.5KHz
		"00100000" when "100",	--20 when 2KHz
		"00100101" when "101",	--25 when 2.5KHz
		"00110000" when "110",	--30 when 3KHz
		"00110101" when others; --35 when 3.5KHz
		
	--Shift the sine wave up by forcing it to always be positive
	shiftedSine(9)<=not sine(9);
	shiftedSine(8 downto 0)<=sine(8 downto 0);
	--Select the volume level using the top 3 slider switches
	with sliderSwitches(5 downto 3) select toShift <=
		0 when "111",  --Max volume when all switches are high
		1 when "110",
		2 when "101",
		3 when "100",
		4 when "011",
		5 when "010",
		6 when "001",
		7 when others; --Minimum volume when all switches low
	--Send shifted sine into the DAC	
	DACin<=STD_LOGIC_VECTOR(unsigned(shiftedSine) srl toShift);
	

End Behavioral;