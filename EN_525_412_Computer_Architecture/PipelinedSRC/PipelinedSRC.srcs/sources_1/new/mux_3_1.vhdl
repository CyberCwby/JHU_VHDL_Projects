----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 03/14/2016 07:39:51 AM
-- Design Name: 
-- Module Name: mux_2_1 - Behavioral
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mux_3_1 is
    Port ( sel :    in  STD_LOGIC_VECTOR (1 downto 0);
           input2:  in  STD_LOGIC_VECTOR (31 downto 0);
           input1 : in  STD_LOGIC_VECTOR (16 downto 0);
           input0 : in  STD_LOGIC_VECTOR (21 downto 0);
           output : out STD_LOGIC_VECTOR (31 downto 0));
end mux_3_1;

architecture Behavioral of mux_3_1 is

begin

with sel select output <=
    input2 when "10",
    std_logic_vector(resize(signed(input1),32)) when "01",
    std_logic_vector(resize(signed(input0),32)) when "00",
    (others=>'0') when others;

end Behavioral;