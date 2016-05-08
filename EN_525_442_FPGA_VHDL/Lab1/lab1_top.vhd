library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.all;

-- Top Level Entity
-- INPUT:  8-bit input sliderSwitches
-- INPUT:  2-bit input pushButtons
-- OUTPUT: 7-bit output seg7
-- OUTPUT: 4-bit output anodes
-- OUTPUT: 8-bit output leds

Entity lab1_top is
Port (
	sliderSwitches: in STD_LOGIC_VECTOR(7 downto 0);
	pushButtons: in STD_LOGIC_VECTOR(1 downto 0);
	seg7: out STD_LOGIC_VECTOR(6 downto 0);
	anodes: out STD_LOGIC_VECTOR(3 downto 0);
	leds: out STD_LOGIC_VECTOR(7 downto 0)
);
end lab1_top;
	
Architecture Behavioral of lab1_top is
	signal display : STD_LOGIC_VECTOR(6 downto 0);
begin


	--Instantiate seg7_hex and assign portmap
	SEG7DISP:  entity work.seg7_hex port map(sliderSwitches(3 downto 0), display);
	
	-- Set value to be displayed on 7 segment.  When both buttons are pressed display digit "0"
	-- otherwise display value from seg7_hex
	with pushButtons select
		seg7 <=
			"1000000" when "11" ,
			display when others;
	
	--Select the appropriate anode using pushButtons (BTN0 & BTN1)
	with pushButtons select
		anodes <=
			"1101" when "01" , -- Enables 2nd 7 segment display when BTN0 is pressed
			"1100" when "10" , -- Enables 2 rightmost displays when BTN1 is pressed
			"0000" when "11" , -- Enables all displays when both buttons are pressed
			"1110" when others;
	leds <= sliderSwitches;	 -- Turns on respective LED for sliderSwitches	
	

end Behavioral;