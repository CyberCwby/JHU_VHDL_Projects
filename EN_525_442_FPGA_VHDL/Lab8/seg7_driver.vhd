library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.all;


--7-segment driver.  Encodes the 4 characters and shifts them to the appropriate display at a 1KHz frequency
--INPUT	clk50			50MHz Clock
--INPUT 	reset			Reset Signal fed by pushButton0
--INPUT	char0			4-bit hex character to be displayed on far right display
--INPUT	char1			4-bit hex character to be displayed on 2nd from right display
--INPUT	char2			4-bit hex character to be displayed on 3rd from right display
--INPUT	char3			4-bit hex character to be displayed on far left display
--OUTPUT	anodes		4-bit representation of the current display
--OUTPUT	encodedChar	7-bit representation of the current character to be displayed
Entity seg7_driver is
Port(
		clk_50:  		IN STD_LOGIC;
		reset:  			IN STD_LOGIC;
		char0:  			IN STD_LOGIC_VECTOR(3 downto 0);
		char1:  			IN STD_LOGIC_VECTOR(3 downto 0);
		char2:  			IN STD_LOGIC_VECTOR(3 downto 0);
		char3:  			IN STD_LOGIC_VECTOR(3 downto 0);
		anodes: 			OUT STD_LOGIC_VECTOR(3 downto 0);
		encodedChar: 	OUT STD_LOGIC_VECTOR(6 downto 0)
);
end Entity seg7_driver;
	
Architecture Behavioral of seg7_driver is
	signal charToDisplay: 	STD_LOGIC_VECTOR(3 downto 0);		--signal for current character being displayed
	signal pulse: 				STD_LOGIC;								--signal to be generated by pulse generator
	signal currentChar: 		unsigned(1 downto 0);				--2-bit counter signal to determine current character and display
begin
	
	SEG7DISP:  entity work.seg7_hex port map(charToDisplay, encodedChar); --instantiation of the 7-segment display encoder
	PULSE1KHZGEN:  entity work.pulseGenerator generic map(n=>16) port map(clk_50,reset, '1',"1100001101010000",pulse); --generates a 1KHz pulse to shift characters to be displayed
	CURRCHAR:  entity work.upCounter generic map (n=>2) port map (clk_50,pulse,reset,currentChar); --counter to determine character to be displayed

		--Process to determine which display is active
	selectAnodes: process(reset,clk_50) is
	begin
		if(reset='1') then
			anodes<="0000"; --displays 0 on all displays when reset is pushed
		else
			if(rising_edge(clk_50)) then
				if(pulse='1') then
					--Activates far right display for char0
					if(currentChar = 0) then
						anodes<="1110";
					--Activates 2nd from right display for char1
					elsif(currentChar = 1) then
						anodes<="1101";
					--Activates 3rd from right display for char2
					elsif (currentChar = 2) then
						anodes<="1011";
					--Activates far left display for char3
					elsif(currentChar = 3) then
						anodes<="0111";
					else
						anodes<="1111";
				--By default all displays inactive
					end if;
				end if;
			end if;
		end if;
	end process selectAnodes;
	--Process to determine the character to be displayed
	getCurrentChar: process(reset,clk_50) is
	begin
		if(reset='1') then					--asynchronous reset displays '0' on current display
			charToDisplay<="0000";
		elsif(rising_edge(clk_50)) then	--on rising edge of clk and pulse update current character
			if	(pulse='1') then
				if(currentChar="00") then		--selects char0
					charToDisplay<=char0;
				elsif(currentChar="01") then	--selects char1
					charToDisplay<=char1;
				elsif(currentChar="10") then	--selects char2
					charToDisplay<=char2;
				elsif(currentChar="11") then	--selects char3
					charToDisplay<=char3;
				end if;
			end if;
		end if;
	end process getCurrentChar;
		
	
end Behavioral;