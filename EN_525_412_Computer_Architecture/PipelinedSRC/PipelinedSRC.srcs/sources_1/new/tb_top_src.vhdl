library ieee;
use ieee.std_logic_1164.all;

entity tb_top_src is
end tb_top_src;

architecture tb of tb_top_src is

    component top_src
        port (clk     : in std_logic;
              reset   : in std_logic;
              d       : inout std_logic_vector (31 downto 0);
              address : out std_logic_vector (31 downto 0);
 --             read    : out std_logic;
 --             write   : out std_logic;
              done    : in std_logic);
    end component;

    signal clk     : std_logic;
    signal reset   : std_logic;
    signal d       : std_logic_vector (31 downto 0);
    signal address : std_logic_vector (31 downto 0);
    signal read    : std_logic;
    signal write   : std_logic;
    signal done    : std_logic;

    constant TbPeriod : time := 1000 ns; -- EDIT put right period here
    signal TbClock : std_logic := '0';

begin

    dut : top_src
    port map (clk     => clk,
              reset   => reset,
              d       => d,
              address => address,
--              read    => read,
--              write   => write,
              done    => done);

    TbClock <= not TbClock after TbPeriod/2;

    -- EDIT: Check that clk is really your main clock signal
    clk <= TbClock;

    stimuli : process
    begin
        -- EDIT
        reset<='1';
        wait for 200ns;
        reset<='0';
        wait;
    end process;

end tb;

configuration cfg_tb_top_src of tb_top_src is
    for tb
    end for;
end cfg_tb_top_src;