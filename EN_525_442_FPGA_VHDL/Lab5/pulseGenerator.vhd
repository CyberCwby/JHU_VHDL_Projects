library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.all;

--Pulse Generator used to generate pulse
--INPUT		clk			50MHz clock
--INPUT		reset			Asyncronous reset fed by pushButton 0
--INPUT		enable		enable signal that turns on the one up counter
--INPUT		maxCounter	maximum number to count to
--OUTPUT		pulse			20ns pulse at the frequency determined by the maxCounter	

Entity pulseGenerator is
Port(
	clk_50: 			IN STD_LOGIC;
	reset: 			IN STD_LOGIC;
	enable: 			IN STD_LOGIC;
	maxCounter: 	IN unsigned(15 downto 0);
	pulse: 			OUT STD_LOGIC
);
end pulseGenerator;

Architecture Behavioral of pulseGenerator is
	signal cntrSig: 		unsigned(15 downto 0);		--internal signal for the counter
	signal clear: 			STD_LOGIC;						--signal to reset the counter when maxCounter is reached				
	begin
	genPulse: process(reset,clk_50)						--process to generate the pulse
	begin
		if(reset='1') then								--if reset, clear the signal and start count over
			cntrSig<=(others=>'0');
		elsif(rising_edge(clk_50)) then
			if(enable='1') then
				if clear='1' then								--clears the cntrSig when maxCounter reached
					cntrSig<=(others=>'0');
				else
					cntrSig<=cntrSig+1;					--if enabled, count up
				end if;
			end if;
		end if;
	end process genPulse;
	clear <= '1' when (cntrSig = maxCounter) else '0'; --sets clear bit when maxCounter is reached
	pulse<=clear;													--sets pulse when maxCounter is reached
end Behavioral;