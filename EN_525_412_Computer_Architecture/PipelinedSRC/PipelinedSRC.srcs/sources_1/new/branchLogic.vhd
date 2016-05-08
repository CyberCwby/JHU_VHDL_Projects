----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 04/19/2016 09:23:56 AM
-- Design Name: 
-- Module Name: branchLogic - Behavioral
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

entity branchLogic is
    Port ( 
        c3 :    in      STD_LOGIC_VECTOR (2 downto 0);
        rc :    in      STD_LOGIC_VECTOR (31 downto 0);
        branch: in      STD_LOGIC;
        Mp1:    out     STD_LOGIC
    );
end branchLogic;

architecture Behavioral of branchLogic is
    signal cond:        STD_LOGIC;
begin

    SETCOND:process(c3) is
    begin
        if (c3 = "000") then
            cond<='0';
        elsif (c3="001") then
            cond<='1';
        elsif (c3="010") then
            if(to_integer(signed(rc))=0) then
                cond<='1';
            else
                cond<='0';
            end if;
        elsif (c3="011") then
            if(to_integer(signed(rc))/=0) then
                cond<='1';
            else
                cond<='0';
            end if;
        elsif (c3="100") then
            if(rc(31) = '0') then
                cond<='1';
            else
                cond<='0';
            end if;
        elsif (c3="101") then
            if(rc(31)='1') then
                cond<='1';
            else
                cond<='0';
            end if;
        end if;
    end process;
    
    Mp1<=branch and cond;    

end Behavioral;
