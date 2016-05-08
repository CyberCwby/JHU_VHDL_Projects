library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use work.all;

--UpCounter
--clk50:			IN		STD_LOGIC	50MHz clock
--reset:			IN		STD_LOGIC	Asynchronous reset
--en:				IN		STD_LOGIC	Enable counting
--cntr:			OUT	unsigned		Output counter signal


Entity readCounter is
Port(
			clk50:	IN 		STD_LOGIC;
			reset:	IN			STD_LOGIC;
			en:		IN			STD_LOGIC;
			cntr:		OUT		unsigned(8 downto 0):=(others=>'0')
			
);
end Entity readCounter;


Architecture Behavioral of readCounter is
	signal	counter:		unsigned(8 downto 0):=(others=>'0'); -- cntr signal
begin

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
	cntr<=counter;


end Behavioral;