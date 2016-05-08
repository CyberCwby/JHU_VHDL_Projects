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

entity decode4 is
  Port ( 
            clk:            IN      STD_LOGIC;
            op:             IN      STD_LOGIC_VECTOR(4 downto 0);
            load:           OUT     STD_LOGIC;
            store:          OUT     STD_LOGIC
  );
end decode4;

architecture Behavioral of decode4 is
        signal store_sig:           STD_LOGIC;
        signal load_sig:            STD_LOGIC;
begin
    
    SETLOADSTORE:process(op) is
    begin
        if((op = "00001") or (op = "00010")) then
            store_sig<='0';
            load_sig<='1';
        elsif ((op = "00011") or (op = "00100")) then 
            store_sig<='1';
            load_sig<='0';
        else
            store_sig<='0';
            load_sig<='0';
        end if;
    end process;

    store<=store_sig and not clk;
    load<=load_sig and not clk;        

end Behavioral;