Library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.all;


--Top Level entity
--INPUT	clk50				50MHz clock
--INPUT	reset				Asynchronous reset driven by pushButton0
--INPUT	sliderSwitches	4-bit input tied to the lowest 4 sliderSwitches
--OUTPUT	seg7				character to be displayed on the display
--OUTPUT	anodes			current active display

Entity top_level is
Port(
	clk_50 : 				in std_logic;
	reset : 				in std_logic;
	sliderSwitches : 	in std_logic_vector(3 downto 0);
	seg7 : 				out std_logic_vector(6 downto 0);
	anodes : 			out std_logic_vector(3 downto 0) 
);
end top_level;

Architecture Behavioral of top_level is
	signal pulse1Hz:	STD_LOGIC;								--1PPS signal
	signal pulse1KHz: STD_LOGIC;								--1KHz signal to serve as an enable for the 1PPS
	signal charOut:	STD_LOGIC_VECTOR(15 downto 0);	--16-bit signal to store the 4 characters to be displayed
begin
	
	--shifts the 4 characters selected with the sliderSwitches
	CHAROUTS:  		entity shiftRegister port map (clk_50,pulse1Hz,reset,sliderSwitches,charOut);		
	--Instantiates the 7-segment driver and ties the appropriate bits from the 16-bit charOut to the correct character
	SEG7DRVR:  		entity work.seg7_driver port map(clk_50,reset,charOut(3 downto 0),charOut(7 downto 4),charOut(11 downto 8),charOut(15 downto 12),anodes,seg7);
	--Generates a 1KHz pulse to drive the enable of the 1PPS generator.  Enable always tied to active
	PULSE1KHZGEN:  entity work.pulseGenerator port map(clk_50,reset, '1',"1100001101010000",pulse1KHz);
	--Generates a 1Hz pulse
	PULSE1HZGEN:	entity work.pulseGenerator port map(clk_50,reset, pulse1KHz,"0000001111101000",pulse1Hz);
end Behavioral;