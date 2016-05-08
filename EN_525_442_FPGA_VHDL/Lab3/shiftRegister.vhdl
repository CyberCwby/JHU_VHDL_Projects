library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.all;

--Shift Register to store and shift the inputs from the switch
--INPUT:		clk50  	50MHz Clock signal
--INPUT:		enable	Enable signal fed by the 1PPS generator
--INPUT:		reset		Reset signal fed by pushButton 0
--INPUT:		dataIn	4-bit input from lowest four Slider switches
--OUTPU:		dataOut	16-bit output for the 4 characters to be displayed

Entity shiftRegister is
Port(
	clk50:	  	IN 		STD_LOGIC;
	enable: 		IN 		STD_LOGIC;
	reset:  		IN 		STD_LOGIC;
	dataIn: 		IN 		STD_LOGIC_VECTOR(3 downto 0);
	dataOut:		OUT 		STD_LOGIC_VECTOR(15 downto 0)
);
end shiftRegister;

Architecture Behavioral of shiftRegister is
	signal data0:	STD_LOGIC_VECTOR(3 downto 0); -- data signal to store the character to be displayed on the far right display
	signal data1:	STD_LOGIC_VECTOR(3 downto 0); -- data signal to store the character to be displayed on 2nd from right display
	signal data2:	STD_LOGIC_VECTOR(3 downto 0); -- data signal to store the character to be displayed on 3rd from right display
	signal data3:	STD_LOGIC_VECTOR(3 downto 0); -- data signal to store the character to be displayed on far left display
begin
	process(clk50,reset)
	begin
		if(reset='1') then						-- asynchronous reset clears all data signals
			data0<=(others=>'0');
			data1<=(others=>'0');
			data2<=(others=>'0');
			data3<=(others=>'0');
		elsif(rising_edge(clk50)) then		-- shift each data signal over 4 bits and grab new input from switch
			if(enable='1') then
				data3<=data2;
				data2<=data1;
				data1<=data0;
				data0<=dataIn;
			end if;
		end if;
	end process;
	dataOut(3 downto 0)<=data0;				-- 1st 4-bits are char0
	dataOut(7 downto 4)<=data1;				-- 2nd 4-bits are char1
	dataOut(11 downto 8)<=data2;				-- 3rd 4-bits are char2
	dataOut(15 downto 12)<=data3;				-- 4th 4-bits are char3
	
end Behavioral;