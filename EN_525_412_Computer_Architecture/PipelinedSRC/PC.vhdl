--Program Counter for Pipelined SRC
--Reference file:  pc.vhd from srcvhdl from Class webpage

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;

Entity PC is 
    Port (
            nextInstruction:    IN      STD_LOGIC_VECTOR(31 downto 0);
            clk:                IN      STD_LOGIC;
            reset:              IN      STD_LOGIC;
            instOut:            OUT     STD_LOGIC_VECTOR(31 downto 0)
);
end PC;

Architecture behavioral of PC is
    signal  pcRegister:      STD_LOGIC_VECTOR(31 downto 0):=(others=>'0');
begin
    pcreg:process(clk,reset)
    begin
        if(reset = '1') then
            pcRegister<=(others=>'0');
        else
            if(rising_edge(clk)) then
                pcRegister<=nextInstruction;
            end if;
        end if;
     end process pcreg;
     
     instOut<=pcRegister;

end behavioral;