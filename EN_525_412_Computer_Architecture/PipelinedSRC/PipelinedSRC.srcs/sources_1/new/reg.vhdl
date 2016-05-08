----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 03/14/2016 08:03:49 AM
-- Design Name: 
-- Module Name: IR2 - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity reg is
    Port ( 
            clk:            in      STD_LOGIC;
            data_in:        in      STD_LOGIC_VECTOR(31 downto 0);
            data_out:       out     STD_LOGIC_VECTOR(31 downto 0)
            );
end reg;

architecture Behavioral of reg is
    signal data:      STD_LOGIC_VECTOR(31 downto 0);

begin

    SETOUTS:process(clk) is
    begin
        if(rising_edge(clk)) then
            data<=data_in;
        end if;
    end process;
    
    data_out<=data;
    
end Behavioral;