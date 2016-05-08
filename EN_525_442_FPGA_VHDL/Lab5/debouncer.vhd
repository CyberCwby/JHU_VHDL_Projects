library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use work.all;

--Entity debouncer.  Debounces the pushButtons and sliderSwitches
--clk_50:				INPUT		STD_LOGIC	50MHz clock
--bouncySignal:		INPUT		STD_LOGIC	Bouncy input
--debouncedSignal:	OUTPUT	STD_LOGIC	Debounced output
Entity debouncer is
Port (
			clk_50:					IN		STD_LOGIC;
			bouncySignal:			IN 	STD_LOGIC;
			debouncedSignal:		OUT	STD_LOGIC
);
end Entity debouncer;

Architecture Behavioral of debouncer is
	signal counter:	unsigned(22 downto 0);		--counter to determine how long bouncy signal is active	
begin
	DBSIGNAL:	process(clk_50) is
	
	begin
	if(rising_edge(clk_50)) then	
			if(bouncySignal='1') then					--If signal has been high for .1s then set the output to high
				if(counter<5000000) then
					counter<=counter+1;
				else
					debouncedSignal<='1';
				end if;	
			else												--Clears the output when the input signal goes low
				debouncedSignal<='0';
				counter<=(others=>'0');
			end if;
	end if;
	end process;
end Architecture Behavioral;
	