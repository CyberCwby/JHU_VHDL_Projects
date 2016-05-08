library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use work.all;

Entity upCounter is
Port(
			clk50:	IN 		STD_LOGIC;
			reset:	IN			STD_LOGIC;
			cntr:		OUT		unsigned(10 downto 0)
			
);
end Entity upCounter;


Architecture Behavioral of upCounter is
	signal 	maxCount: 	unsigned(10 downto 0);
	signal	counter:		unsigned(10 downto 0);
	signal	toCount:		STD_LOGIC;
begin
	maxCount<="10000000001";
	countUp:	process(clk50,reset) is
	begin
		if(reset='1') then
			counter<=(others=>'0');
		elsif(rising_edge(clk50)) then
			if(toCount='1') then
				counter<=counter+1;
			end if;
		end if;
	end process;
	toCount<='0' when (counter = maxCount) else '1';
	cntr<=counter;


end Behavioral;