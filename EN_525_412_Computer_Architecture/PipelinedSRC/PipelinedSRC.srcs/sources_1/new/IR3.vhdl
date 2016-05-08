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

entity IR3 is
    Port ( 
            clk:                in      STD_LOGIC;
            op_in:              in      STD_LOGIC_VECTOR(4 downto 0);
            ra_in:              in      STD_LOGIC_VECTOR(4 downto 0);
            op_out:            out      STD_LOGIC_VECTOR(4 downto 0);
            ra_out:            out      STD_LOGIC_VECTOR(4 downto 0)
            );
end IR3;

architecture Behavioral of IR3 is

begin

    SETOUTS:process(clk) is
    begin
        if(rising_edge(clk)) then
            op_out<=op_in;
            ra_out<=ra_in;
        end if;
    end process;
    
end Behavioral;
