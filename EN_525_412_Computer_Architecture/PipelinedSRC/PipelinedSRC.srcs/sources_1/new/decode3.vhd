----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 04/19/2016 08:09:22 AM
-- Design Name: 
-- Module Name: decode3 - Behavioral
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

entity decode3 is
  Port ( 
            op:             IN      STD_LOGIC_VECTOR(4 downto 0);
            ALU_OP:         OUT     STD_LOGIC_VECTOR(11 downto 0)
  );
end decode3;

architecture Behavioral of decode3 is

begin
    
    DECODEOP:process(op) is
    begin
        case op is
            when "00001"=>  ALU_OP<="100000000000";
            when "00010"=>  ALU_OP<="100000000000";
            when "00011"=>  ALU_OP<="100000000000";
            when "00100"=>  ALU_OP<="100000000000";
            when "00101"=>  ALU_OP<="100000000000";
            when "00110"=>  ALU_OP<="100000000000";
            when "01100"=>  ALU_OP<="100000000000";
            when "01101"=>  ALU_OP<="100000000000";
            when "01110"=>  ALU_OP<="010000000000";
            when "01111"=>  ALU_OP<="000001000000";
            when "10100"=>  ALU_OP<="001000000000";
            when "10101"=>  ALU_OP<="001000000000";
            when "10110"=>  ALU_OP<="000000000010";
            when "10111"=>  ALU_OP<="000000000010";
            when "11000"=>  ALU_OP<="000000000001";
            when others=>   ALU_OP<="000000000000";
        end case;
    end process;
end Behavioral;
