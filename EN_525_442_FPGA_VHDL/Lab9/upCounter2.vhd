library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.all;


--Two bit UpCOunter
--INPUT		clk		50MHz clock
--INPUT		enable	turns on the counter
--INPUT		reset		Asynchronous reset to clear the counter
--OUTPUT		count		N-bit number to count 
Entity upCounter2 is
--Generic used for parameterization of counter signal
generic(n: positive:=2);
Port(
	clk_50: 		IN STD_LOGIC;
	enable: 		IN STD_LOGIC;
	reset: 		IN STD_LOGIC;
	count: 		OUT unsigned(n-1 downto 0)
);
end upCounter2;

Architecture Behavioral of upCounter2 is
	signal cntr2Sig: unsigned(n-1 downto 0);			--internal counter signal
	signal toCount: STD_LOGIC;
begin
	process(reset,clk_50)
	begin
		if(reset='1') then					--Asynchronously clear the counter signal
			cntr2Sig<=(others=>'0');		
		elsif(rising_edge(clk_50)) then		--on rising edge, if enabled increment counter
			if(enable='1' and toCount='1') then
				cntr2Sig<=cntr2Sig+1;
				toCount<='0';
			elsif(enable='0') then
				toCount<='1';
			end if;
		end if;
	end process;
	count<=cntr2Sig;							--assigns counter signal to the output
	
end Behavioral;