library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use work.all;

Entity pulseGen60Hz is
Port (
			clk_50:		IN		STD_LOGIC;
			reset:		IN		STD_LOGIC;
			en60:			OUT	STD_LOGIC
);
end Entity pulseGen60Hz;

Architecture Behavioral of pulseGen60Hz is
	signal cntrSig:	unsigned(19 downto 0):=(others=>'0');
	signal maxCount:	unsigned(19 downto 0);
	signal clear:		STD_LOGIC;
begin
	maxCount<="11001011011100110101";
	genPulse: process(reset,clk_50)
	begin
		if(reset='1') then
			cntrSig<=(others=>'0');
		else
			if(rising_edge(clk_50)) then
				if(clear='0') then
					cntrSig<=cntrSig+1;
				else
					cntrSig<=(others=>'0');
				end if;
			end if;
		end if;
	end process;
	clear<='1' when(cntrSig=maxCount) else '0';
	en60<=clear;
end Behavioral;