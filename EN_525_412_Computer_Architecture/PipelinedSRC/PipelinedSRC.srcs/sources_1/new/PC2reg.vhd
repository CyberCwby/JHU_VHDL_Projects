----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 03/14/2016 09:14:44 AM
-- Design Name: 
-- Module Name: PC2reg - Behavioral
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

entity PC2reg is
    Port ( clk : in STD_LOGIC;
           PC2in : in STD_LOGIC_VECTOR (31 downto 0);
           PC2out : out STD_LOGIC_VECTOR (31 downto 0));
end PC2reg;

architecture Behavioral of PC2reg is

begin
    
    UPDATEPC2:process(clk) is
    begin
        if(rising_edge(clk)) then
            PC2out<=PC2in;
        end if;
    end process;
    
end Behavioral;
