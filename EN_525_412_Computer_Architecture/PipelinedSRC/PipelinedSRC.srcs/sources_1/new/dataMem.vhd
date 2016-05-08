----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 04/19/2016 08:43:38 AM
-- Design Name: 
-- Module Name: dataMem - Behavioral
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

entity dataMem is
    Port ( addr :       in      STD_LOGIC_VECTOR (31 downto 0);
           load:        in      STD_LOGIC;
           store:       in      STD_LOGIC;
           data :       inout   STD_LOGIC_VECTOR (31 downto 0));
end dataMem;

architecture Behavioral of dataMem is
    type memory is array (0 to 65536) of STD_LOGIC_VECTOR(31 downto 0);
    signal dataMemory:      memory;
begin
    
    STOREDATA: process(store) is
    begin
        if(rising_edge(store)) then
            dataMemory(to_integer(unsigned(addr)))<=data;
        end if;
    end process;
    
    LOADDATA:  process(load) is
    begin
        if(rising_edge(load)) then
            data<=dataMemory(to_integer(unsigned(addr)));
        end if;
    end process;
            
            
    

end Behavioral;
