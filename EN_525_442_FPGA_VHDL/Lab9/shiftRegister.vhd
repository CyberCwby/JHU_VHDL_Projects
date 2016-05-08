library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.all;

--Shift register for syncing 1PPS signal
--clk_50		50 MHz clock
--reset		reset signal
--sigIN		Input from the 1PPS generator
--sigOUT		synced 1PPS signal
Entity shiftRegister is
Port(
		clk_50:		IN		STD_LOGIC;
		reset:		IN		STD_LOGIC;
		sigIN:		IN		STD_LOGIC;
		sigOUT:		OUT 	STD_LOGIC
); end shiftRegister;

Architecture Behavioral of shiftRegister is
	SIGNAL Q0,Q1,Q2,Q3:	STD_LOGIC;
begin
	process(reset,clk_50) is
	begin
		--Clears all flip-flops when reset is high
		if(reset='1') then
			Q0<='0';
			Q1<='0';
			Q2<='0';
			Q3<='0';
		else
			--sigIN goes to Q0 then shifts through other flip-flops on subsequent clock edges
			if(rising_edge(clk_50)) then
				Q0<=sigIN;
				Q1<=Q0;
				Q2<=Q1;
				Q3<=Q2;
			end if;
		end if;
		end process;
	--will go high when 1PPS has been high for 4 50MHz clock signals
	sigOUT<=Q3;

end Behavioral;