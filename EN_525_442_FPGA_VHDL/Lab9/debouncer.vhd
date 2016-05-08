library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use work.all;

--Debouncer
--clk_50:		 IN			STD_LOGIC 50MHz clock
--bouncySignal: IN			STD_LOGIC Signal to be debounced
--debouncedSignal: OUT		STD_LOGIC Debounced signal


Entity debouncer is
Port (
			clk_50:					IN		STD_LOGIC;
			bouncySignal:			IN 	STD_LOGIC;
			debouncedSignal:		OUT	STD_LOGIC
);
end Entity debouncer;

Architecture Behavioral of debouncer is
	signal counter:	unsigned(22 downto 0);			
begin
	--Process to debounce signal.  Sets output high when signal has been active for .1 second
	--Sets back to 0 when it goes low again.
	DBSIGNAL:	process(clk_50) is
	begin
	if(rising_edge(clk_50)) then
			if(bouncySignal='1') then
				if(counter<5000000) then
					counter<=counter+1;
				else
					debouncedSignal<='1';
				end if;
			else
				debouncedSignal<='0';
				counter<=(others=>'0');
			end if;
	end if;
	end process;
end Architecture Behavioral;
	