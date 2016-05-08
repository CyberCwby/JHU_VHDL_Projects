----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 03/14/2016 09:50:23 AM
-- Design Name: 
-- Module Name: instMem - Behavioral
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

entity instMem is
    Port ( 
            reset:      in      STD_LOGIC;
            d :         out     STD_LOGIC_VECTOR (31 downto 0);
           address :    in      STD_LOGIC_VECTOR (31 downto 0);
           clk :        in      STD_LOGIC);
end instMem;

architecture Behavioral of instMem is

    Signal data:        STD_LOGIC_VECTOR(31 downto 0);
    
BEGIN
   WITH address  SELECT
   data <=
     X"30001ffc" WHEN X"00000000" ,
     X"28400001" WHEN X"00000004" ,
     X"20401fe8" WHEN X"00000018" ,
     X"10801fe4" WHEN X"0000001c" ,
     X"28c00002" WHEN X"00000020" ,
     X"18c02008" WHEN X"00000034" ,
     X"09002008" WHEN X"00000038" ,
     X"f8000000" WHEN X"0000003c" ,
     X"00000000" WHEN OTHERS ;

 
    with reset SELECT 
    d<=
        data when '0',
        (others=>'0') when others;

END behavioral ;
