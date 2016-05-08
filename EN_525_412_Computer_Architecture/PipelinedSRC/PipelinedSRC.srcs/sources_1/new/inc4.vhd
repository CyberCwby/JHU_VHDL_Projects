----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 03/10/2016 01:07:37 PM
-- Design Name: 
-- Module Name: inc4 - Behavioral
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
use IEEE.numeric_std.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;


entity inc4 is
    Port ( 
            clk:    in  STD_LOGIC;
            reset:  in STD_LOGIC;
            bus_in : in STD_LOGIC_VECTOR (31 downto 0);
            bus_out : out STD_LOGIC_VECTOR (31 downto 0));
end inc4;

Architecture Behavioral of inc4 is
    signal  newPC: unsigned (31 downto 0):=(others=>'0');
begin
    --Process to increment the PC by 4
    INCREMENTPC: process(bus_in) is
    begin
        newPC<=unsigned(bus_in) + 4;
    end process INCREMENTPC;
    
    bus_out<=std_logic_vector(newPC); 

end Behavioral;
