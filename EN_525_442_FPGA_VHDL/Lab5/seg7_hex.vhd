library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.all;

-- Creating entity seg7_hex to drive 7 Segment display
-- INPUTS:  4-bit input digit
-- OUTPUTS: 7 bit output seg7

entity seg7_hex is Port (
	digit: 	in STD_LOGIC_VECTOR(3 downto 0);  -- 4-bit input to be displayed on the 7 segment display
	seg7: 	out STD_LOGIC_VECTOR(6 downto 0)  -- 7-bit output to turn on the various segments to display the hex digit
);
end seg7_hex;

architecture Behavioral of seg7_hex is			--encodes the hex into 7-bits for 7-segment display
begin
	with digit select
	seg7 <=
		"1000000" when "0000" ,		--displays hex 0 on display
		"1111001" when "0001" ,		--displays hex 1 on display
		"0100100" when "0010" ,		--displays hex 2 on display
		"0110000" when "0011" ,		--displays hex 3 on display
		"0011001" when "0100" ,		--displays hex 4 on display
		"0010010" when "0101" ,		--displays hex 5 on display
		"0000010" when "0110" ,		--displays hex 6 on display
		"1111000" when "0111" ,		--displays hex 7 on display
		"0000000" when "1000" ,		--displays hex 8 on display
		"0010000" when "1001" ,		--displays hex 9 on display
		"0001000" when "1010" ,		--displays hex A on display
		"0000011" when "1011" ,		--displays hex b on display
		"1000110" when "1100" ,		--displays hex C on display
		"0100001" when "1101" ,		--displays hex d on display
		"0000110" when "1110" ,		--displays hex E on display
		"0001110" when others;		--displays hex F on display
end Behavioral;