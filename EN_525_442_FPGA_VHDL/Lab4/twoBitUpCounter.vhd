library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.all;


--Two bit UpCOunter
--INPUT		clk		50MHz clock
--INPUT		enable	turns on the counter
--INPUT		reset		Asynchronous reset to clear the counter
--OUTPUT		count		2-bit number 
Entity twoBitUpCounter is
Port(
	clk_50: 		IN STD_LOGIC;
	enable: 		IN STD_LOGIC;
	reset: 		IN STD_LOGIC;
	count: 		OUT unsigned(1 downto 0)
);
end twoBitUpCounter;

Architecture Behavioral of twoBitUpCounter is
	signal cntr2Sig: unsigned(1 downto 0);			--internal counter signal
begin
	process(reset,clk_50)
	begin
		if(reset='1') then					--Asynchronously clear the counter signal
			cntr2Sig<=(others=>'0');		
		elsif(rising_edge(clk_50)) then		--on rising edge, if enabled increment counter
			if(enable='1') then
				cntr2Sig<=cntr2Sig+1;
			end if;
		end if;
	end process;
	count<=cntr2Sig;							--assigns counter signal to the output
	
end Behavioral;