----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 03/15/2016 09:30:23 AM
-- Design Name: 
-- Module Name: ALU - Behavioral
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
    Port ( 
        A : in STD_LOGIC_VECTOR (31 downto 0);
        B : in STD_LOGIC_VECTOR (31 downto 0);
        C : out STD_LOGIC_VECTOR (31 downto 0);
        ALU_Op : in STD_LOGIC_VECTOR (11 downto 0));
end ALU;

architecture Behavioral of ALU is

begin
    with ALU_op select
        C <=    A + B                   when "100000000000",
                A - B                   when "010000000000",
                A AND B                 when "001000000000",
                B                       when "000100000000",
                B + 4                   when "000010000000",
                0 - B                   when "000001000000",
                '0' & B(31 downto 1)    when "000000100000",
                B(30 downto 0) & '0'    when "000000010000",
                B(0) & B(31 downto 0)   when "000000001000",
                B(31) & B(31 downto 1)  when "000000000100",
                A OR B                  when "000000000010",
                NOT(B)                  when "000000000001",
                B                       when others;

end Behavioral;
