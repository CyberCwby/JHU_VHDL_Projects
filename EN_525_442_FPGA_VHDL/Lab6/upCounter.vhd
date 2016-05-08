library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use work.all;

--UpCounter
--clk50:			IN		STD_LOGIC	50MHz clock
--reset:			IN		STD_LOGIC	Asynchronous reset
--en:				IN		STD_LOGIC	Enable counting
--cntr:			OUT	unsigned		Output counter signal
--pulse:			OUT	STD_LOGIC	Pulse when cntr hits maxCount

Entity upCounter is
Port(
			clk50:	IN 		STD_LOGIC;
			reset:	IN			STD_LOGIC;
			en:		IN			STD_LOGIC;
			cntr:		OUT		unsigned(10 downto 0):=(others=>'0');
			pulse:	OUT		STD_LOGIC
			
);
end Entity upCounter;


Architecture Behavioral of upCounter is
	signal 	maxCount: 	unsigned(10 downto 0);		--Max value to be counted to
	signal	counter:		unsigned(10 downto 0):=(others=>'0'); -- cntr signal
begin
	maxCount<="10000000001"; -- counts to 1025
	countUp:	process(clk50,reset) is
	begin
		if(reset='1') then
			counter<=(others=>'0');
		elsif(rising_edge(clk50)) then
			if(en='1') then
				counter<=counter+1;
			end if;
		end if;
	end process;
	pulse<='1' when (counter = maxCount) else '0'; -- pulse when cntr hits maxCount
	cntr<=counter;


end Behavioral;