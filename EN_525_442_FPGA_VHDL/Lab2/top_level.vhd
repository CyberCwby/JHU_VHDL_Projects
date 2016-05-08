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

Entity lab2_top is
Port (
	sliderSwitches: in STD_LOGIC_VECTOR(7 downto 0);
	pushButtons: in STD_LOGIC_VECTOR(1 downto 0);
	seg7: out STD_LOGIC_VECTOR(6 downto 0);
	anodes: out STD_LOGIC_VECTOR(3 downto 0);
	leds: out STD_LOGIC_VECTOR(7 downto 0)
);
end lab2_top;

Architecture Behavioral of lab2_top is
	--Signal to handle the selection of the digit to be displayed on the 7 segment display
	signal dispSeg: STD_LOGIC_VECTOR(3 downto 0);
begin
	--Display the status of the switches on the LEDs
	leds<=sliderSwitches;

	--Assign the bottom 3 switches to the dispSeg signal
	dispSeg<=sliderSwitches(3 downto 0);
	
	--Process to determine which display is active
	dispAnodes: process(pushButtons) is
	begin
		--Activates 2nd from the right 7seg display when button 0 is pushed
		if(pushButtons = "01") then
			anodes<="1101";
		--Activates 2 rightmost displays when button 1 is pushed
		elsif (pushButtons = "10") then
			anodes<="1100";
		--Activates all displays when both buttons are pushed
		elsif (pushButtons = "11") then
			anodes<="0000";
		--By default only activate rightmost display
		else
			anodes<="1110";
		end if;
	end process dispAnodes;
	
	--Process to determine the digit to be displayed
	disp7seg: process(pushButtons,dispSeg) is
	begin
		--If both buttons are pressed, display the digit '0' on the display
		if(pushButtons="11") then
			seg7<="1000000";
		else
				--Selects the appropriate segments to activate based on the position of the
				--lower 4 slider switches
				case dispSeg is
					when "0000" =>
						seg7<="1000000";
					when "0001" =>
						seg7<="1111001";
					when "0010" =>
						seg7<="0100100";
					when "0011" =>
						seg7<="0110000";
					when "0100" =>
						seg7<="0011001";
					when "0101" =>
						seg7<="0010010";
					when "0110" =>
						seg7<="0000010";
					when "0111" =>
						seg7<="1111000";
					when "1000" =>
						seg7<="0000000";
					when "1001" =>
						seg7<= "0010000";
					when "1010" =>
						seg7<="0001000";
					when "1011" =>
						seg7<="0000011";
					when "1100" =>
						seg7<="1000110";
					when "1101" =>
						seg7<="0100001";
					when "1110" =>
						seg7<="0000110";
					when others =>
						seg7<="0001110";
				end case;
		end if;
	end process disp7seg;
	
end Behavioral;