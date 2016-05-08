library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.all;

Entity flipFlop is
Port (
	clk: 		IN STD_LOGIC;
	enable: 	IN STD_LOGIC;
	reset: 	IN STD_LOGIC;
	data: 	IN STD_LOGIC_VECTOR(3 downto 0);
	Q: 		OUT STD_LOGIC_VECTOR(3 downto 0)
);
end flipFlop;

Architecture Behavioral of flipFlop is
begin
	process(clk, reset)
	begin
		if(reset='1') then
			Q<=(others=>'0');
		elsif(rising_edge(clk)) then
			if(enable='1') then
				Q<=data;
			end if;
		end if;
	end process;

end Behavioral;