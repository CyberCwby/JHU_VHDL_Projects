----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 05/05/2016 08:20:35 AM
-- Design Name: 
-- Module Name: buffer - Behavioral
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

entity mem_buffer is
    Port ( data_in :    in  STD_LOGIC_VECTOR (31 downto 0);
           sel :        in  STD_LOGIC;
           data_out :   out STD_LOGIC_VECTOR (31 downto 0));
end mem_buffer;

architecture Behavioral of mem_buffer is
begin
    process(sel) is
    begin
        if(sel='1') then
            data_out<=data_in;
        else
            data_out<=(others=>'Z');
        end if;
    end process;


end Behavioral;
