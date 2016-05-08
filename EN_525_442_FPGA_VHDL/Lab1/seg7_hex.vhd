library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.all;

-- Creating entity seg7_hex to drive 7 Segment display
-- INPUTS:  4-bit input digit
-- OUTPUTS: 7 bit output seg7

entity seg7_hex is Port (
	digit: in STD_LOGIC_VECTOR(3 downto 0);  -- 4-bit input to be displayed on the 7 segment display
	seg7: out STD_LOGIC_VECTOR(6 downto 0)  -- 7-bit output to turn on the various segments to display the hex digit
);
end seg7_hex;

architecture Behavioral of seg7_hex is
begin
	with digit select
	--Activate the appropriate segments on the 7-segment display
	seg7 <=
		"1000000" when "0000" ,
		"1111001" when "0001" ,
		"0100100" when "0010" ,
		"0110000" when "0011" ,
		"0011001" when "0100" ,
		"0010010" when "0101" ,
		"0000010" when "0110" ,
		"1111000" when "0111" ,
		"0000000" when "1000" ,
		"0010000" when "1001" ,
		"0001000" when "1010" ,
		"0000011" when "1011" ,
		"1000110" when "1100" ,
		"0100001" when "1101" ,
		"0000110" when "1110" ,
		"0001110" when others;
end Behavioral;