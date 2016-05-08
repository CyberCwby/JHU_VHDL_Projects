----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 03/14/2016 08:49:24 AM
-- Design Name: 
-- Module Name: reg_File - Behavioral
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

entity reg_File is
    Port ( a1address :  in  STD_LOGIC_VECTOR (4 downto 0);
           a2address :  in  STD_LOGIC_VECTOR (4 downto 0);
           a3address :  in  STD_LOGIC_VECTOR (4 downto 0);
           R3data :     in  STD_LOGIC_VECTOR (31 downto 0);
           R1data :     out STD_LOGIC_VECTOR (31 downto 0);
           R2data :     out STD_LOGIC_VECTOR (31 downto 0);
           G1:          in  STD_LOGIC;
           GA1:         in  STD_LOGIC;
           G2:          in  STD_LOGIC;
           W3:          in  STD_LOGIC 
           );
end reg_File;

architecture Behavioral of reg_File is
    type registerFile is array(0 to 31) of STD_LOGIC_VECTOR(31 downto 0);
    signal registers: registerFile;
   
begin

    regFile1: process(G1) is
    begin
        if (rising_edge(G1)) then
            if(GA1='1' AND a1address="00000") then
                R1data<=(others=>'0');
            else
                R1data<=registers(to_integer(unsigned(a1address)));
            end if;
        end if;
    end process;
     
    regFile2: process(G2) is
    begin
        if(rising_edge(G2)) then
            if(GA1='1' AND a2address="00000") then
                R2data<=(others=>'0');
            else
                 R2data<=registers(to_integer(unsigned(a2address)));
            end if;
        end if;
    end process;
    
    regWrite: process(W3) is
    begin
        if(rising_edge(W3)) then
            registers(to_integer(unsigned(a3address)))<=R3data;
        end if;
    end process;
    

end Behavioral;
