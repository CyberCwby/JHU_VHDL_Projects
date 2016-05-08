library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use work.all;

--Entity to generate 25MHz pulse
--clk_50:		INPUT			STD_LOGIC	50MHz clock
--en25:			OUTPUT		STD_LOGIC	25MHz pulse signal

Entity pulseGen25MHz is
Port (
			clk_50:			IN		STD_LOGIC;
			en25:				OUT	STD_LOGIC
);
end Entity pulseGen25MHz;

Architecture Behavioral of pulseGen25MHz is
	signal	en25t:		STD_LOGIC:='0';
begin
	--Toggle the en25t signal each rising edge of the clock
	genPulse: process(clk_50)
	begin
		if(rising_edge(clk_50)) then
			en25t<=not en25t;
		end if;
	end process;
	--assign en25t to the output en25
	en25<=en25t;
end Behavioral;