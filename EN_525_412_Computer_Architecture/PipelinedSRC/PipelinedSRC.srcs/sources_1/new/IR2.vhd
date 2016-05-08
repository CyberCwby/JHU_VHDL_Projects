----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 03/14/2016 08:03:49 AM
-- Design Name: 
-- Module Name: IR2 - Behavioral
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

entity IR2 is
    Port ( 
            clk:            in      STD_LOGIC;
            instruction :   in      STD_LOGIC_VECTOR(31 downto 0);
            op :            out     STD_LOGIC_VECTOR(4 downto 0);
            ra :            out     STD_LOGIC_VECTOR(4 downto 0);
            rb :            out     STD_LOGIC_VECTOR(4 downto 0);
            rc :            out     STD_LOGIC_VECTOR(4 downto 0);
            c1 :            out     STD_LOGIC_VECTOR(21 downto 0);
            c2 :            out     STD_LOGIC_VECTOR(16 downto 0);
            c3 :            out     STD_LOGIC_VECTOR(2 downto 0);
            G1 :            out     STD_LOGIC;
            GA1:            out     STD_LOGIC;
            G2:             out     STD_LOGIC;
            Mp3:            out     STD_LOGIC;
            Mp4:            out     STD_LOGIC_VECTOR(1 downto 0);
            imm2:           out     STD_LOGIC;
            alu2:           out     STD_LOGIC;
            rel2:           out     STD_LOGIC;
            dsp2:           out     STD_LOGIC;
            store2:         out     STD_LOGIC; 
            branch2:        out     STD_LOGIC;
            brl2:           out     STD_LOGIC
            );
end IR2;

architecture Behavioral of IR2 is
            signal instructionReg:  STD_LOGIC_VECTOR(31 downto 0);
            signal opCode:          STD_LOGIC_VECTOR(4 downto 0);
            signal ra_sig:          STD_LOGIC_VECTOR(4 downto 0);
            signal rb_sig:          STD_LOGIC_VECTOR(4 downto 0);
            signal rc_sig:          STD_LOGIC_VECTOR(4 downto 0);
            signal c1_sig:          STD_LOGIC_VECTOR(21 downto 0);
            signal c2_sig:          STD_LOGIC_VECTOR(16 downto 0);
            signal c3_sig:          STD_LOGIC_VECTOR(2 downto 0);
            signal G1_sig:          STD_LOGIC;
            signal GA1_sig:         STD_LOGIC;
            signal G2_sig:          STD_LOGIC;
            signal imm2_sig:        STD_LOGIC;
            signal alu2_sig:        STD_LOGIC;
            signal rel2_sig:        STD_LOGIC;
            signal dsp2_sig:        STD_LOGIC;
            signal store2_sig:      STD_LOGIC; 
            signal branch2_sig:     STD_LOGIC;
            signal brl2_sig:        STD_LOGIC;
            signal mp3_sig:         STD_LOGIC;
            signal mp4_sig:         STD_LOGIC_VECTOR(1 downto 0);
    
begin

    SETREG: process(clk) is
    begin
        if(rising_edge(clk)) then
            instructionReg<=instruction;
        end if;
    end process;


    SETOUTS:process(instructionReg) is
    begin
            opCode<=instructionReg(31 downto 27);
            ra_sig<=instructionReg(26 downto 22);
            rb_sig<=instructionReg(21 downto 17);
            rc_sig<=instructionReg(16 downto 12);
            c1_sig<=instructionReg(21 downto 0);
            c2_sig<=instructionReg(16 downto 0);
            c3_sig<=instructionReg(2 downto 0);
    end process;
    
    DECODEOP:process(opCode) is
    begin
            case opCode is
                when  "00001"=> dsp2_sig<='1';
                                rel2_sig<='0';
                                store2_sig<='0';
                                branch2_sig<='0';
                                brl2_sig<='0';
                                alu2_sig<='0';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='0';
                when  "00010"=> rel2_sig<='1';
                                dsp2_sig<='0';
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                alu2_sig<='0';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='0';
                when  "00011"=>store2_sig<='1';
                                dsp2_sig<='1';
                                rel2_sig<='0';
                                branch2_sig<='0';
                                brl2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='0';
                when  "00100"=>store2_sig<='1';
                                dsp2_sig<='0';
                                rel2_sig<='1';
                                branch2_sig<='0';
                                brl2_sig<='0';
                                alu2_sig<='0';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='0';
                when  "00101"=>store2_sig<='1';
                                dsp2_sig<='1';
                                rel2_sig<='0';
                                branch2_sig<='0';
                                brl2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='0';
                when  "00110"=>store2_sig<='1';
                                dsp2_sig<='0';
                                rel2_sig<='1';
                                branch2_sig<='0';
                                brl2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='0';
                when  "00111"=>store2_sig<='1';
                                dsp2_sig<='1';
                                rel2_sig<='0';
                                branch2_sig<='0';
                                brl2_sig<='0';
                                alu2_sig<='0';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='0';
                when  "01000"=> branch2_sig<='1';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='0';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='1';
                when  "01001"=> 
                                branch2_sig<='1';
                                brl2_sig<='1';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='0';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='1';
                when  "01100"=> 
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='1';
                when  "01101"=> 
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='1';
                                G1_sig<='1';
                                G2_sig<='0';
                when  "01110"=> 
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='1';
                when  "01111"=> 
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='1';
                when  "10100"=> 
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='0';
                when  "10101"=> 
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='1';
                                G1_sig<='1';
                                G2_sig<='0';
                when  "10110"=> 
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='1';
                when  "10111"=> 
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='1';
                                G1_sig<='1';
                                G2_sig<='0';
                when  "11000"=> 
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='1';
                when  "11010"=> 
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='1';
                when  "11011"=> 
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='1';
                when  "11100"=> 
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='1';
                when  "11101"=> 
                                branch2_sig<='0';
                                brl2_sig<='0';
                                store2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='1';
                                imm2_sig<='0';
                                G1_sig<='1';
                                G2_sig<='1';
                when others=>
                                store2_sig<='0';
                                brl2_sig<='0';
                                branch2_sig<='0';
                                dsp2_sig<='0';
                                rel2_sig<='0';
                                alu2_sig<='0';
                                imm2_sig<='0';
                                G1_sig<='0';
                                G2_sig<='0';
            end case;
    end process;

    SETMP3: process(clk) is
    begin 
        if(falling_edge(clk)) then
            if(rel2_sig='1' or branch2_sig='1') then
                mp3_sig<='0';
            elsif(dsp2_sig='1' or alu2_sig='1') then
                mp3_sig<='1';
            else
                mp3_sig<='0';
            end if;
        end if;
    end process;
    
    SETMP4: process(clk) is
    begin
        if(falling_edge(clk)) then
            if(rel2_sig='1') then
                mp4_sig<="00";
            elsif(dsp2_sig='1' or imm2_sig='1') then
                mp4_sig<="01";
            elsif(alu2_sig='1' and  imm2_sig='0') then
                mp4_sig<="10";
            end if;
        end if;
    end process;


    
    with rb_sig select GA1_sig <=
        '1' when "00000",
        '0' when others;
    

--  Assign outputs    
    op<=opCode;
    rb<=rb_sig;
    rc<=rc_sig;
    ra<=ra_sig;
    c1<=c1_sig;
    c2<=c2_sig;
    c3<=c3_sig;
    G1<=G1_sig and not clk;
    G2<=not clk;
    GA1<=GA1_sig and dsp2_sig;
    Mp3<=mp3_sig;
    Mp4<=mp4_sig;
    imm2<=imm2_sig;
    alu2<=alu2_sig;
    rel2<=rel2_sig;
    dsp2<=dsp2_sig;
    store2<=store2_sig; 
    branch2<=branch2_sig;
    brl2<=brl2_sig;
    
end Behavioral;
