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

entity decode5 is
  Port ( 
            clk:            IN      STD_LOGIC;
            op:             IN      STD_LOGIC_VECTOR(4 downto 0);
            W3:             OUT     STD_LOGIC
  );
end decode5;

architecture Behavioral of decode5 is
    signal W3_sig:      STD_LOGIC;
begin
    SETW3SIG:process(clk,op) is
    begin
        if(falling_edge(clk)) then
            case op is
                when "00000"=>  W3_sig<='0'; 
                when "00001"=>  W3_sig<='1';
                when "00010"=>  W3_sig<='1';
                when "00101"=>  W3_sig<='1';
                when "00110"=>  W3_sig<='1';
                when "01001"=>  W3_sig<='1';
                when "01100"=>  W3_sig<='1';
                when "01101"=>  W3_sig<='1';
                when "01110"=>  W3_sig<='1';
                when "01111"=>  W3_sig<='1';
                when "10100"=>  W3_sig<='1';
                when "10101"=>  W3_sig<='1';
                when "10110"=>  W3_sig<='1';
                when "10111"=>  W3_sig<='1';
                when "11000"=>  W3_sig<='1';
                when "11010"=>  W3_sig<='1';
                when "11011"=>  W3_sig<='1';
                when "11100"=>  W3_sig<='1';
                when "11101"=>  W3_sig<='1';
                when others =>  W3_sig<='0';
            end case;
        end if;
    end process;
        
    W3<=W3_sig and not clk;

end Behavioral;