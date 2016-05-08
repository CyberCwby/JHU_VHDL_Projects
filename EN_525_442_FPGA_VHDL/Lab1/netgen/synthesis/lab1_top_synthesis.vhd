--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: P.20131013
--  \   \         Application: netgen
--  /   /         Filename: lab1_top_synthesis.vhd
-- /___/   /\     Timestamp: Thu Jun 04 16:18:04 2015
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -ar Structure -tm lab1_top -w -dir netgen/synthesis -ofmt vhdl -sim lab1_top.ngc lab1_top_synthesis.vhd 
-- Device	: xc3s500e-4-fg320
-- Input file	: lab1_top.ngc
-- Output file	: D:\VHDL Projects\Lab1\netgen\synthesis\lab1_top_synthesis.vhd
-- # of Entities	: 1
-- Design Name	: lab1_top
-- Xilinx	: D:\Xilinx\14.7\ISE_DS\ISE\
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
use UNISIM.VPKG.ALL;

entity lab1_top is
  port (
    anodes : out STD_LOGIC_VECTOR ( 3 downto 0 ); 
    leds : out STD_LOGIC_VECTOR ( 7 downto 0 ); 
    seg7 : out STD_LOGIC_VECTOR ( 6 downto 0 ); 
    sliderSwitches : in STD_LOGIC_VECTOR ( 7 downto 0 ); 
    pushButtons : in STD_LOGIC_VECTOR ( 1 downto 0 ) 
  );
end lab1_top;

architecture Structure of lab1_top is
  signal N13 : STD_LOGIC; 
  signal N15 : STD_LOGIC; 
  signal N17 : STD_LOGIC; 
  signal N19 : STD_LOGIC; 
  signal N21 : STD_LOGIC; 
  signal N23 : STD_LOGIC; 
  signal N25 : STD_LOGIC; 
  signal anodes_0_OBUF_11 : STD_LOGIC; 
  signal anodes_1_OBUF_12 : STD_LOGIC; 
  signal anodes_3_OBUF_13 : STD_LOGIC; 
  signal leds_0_OBUF_22 : STD_LOGIC; 
  signal leds_1_OBUF_23 : STD_LOGIC; 
  signal leds_2_OBUF_24 : STD_LOGIC; 
  signal leds_3_OBUF_25 : STD_LOGIC; 
  signal leds_4_OBUF_26 : STD_LOGIC; 
  signal leds_5_OBUF_27 : STD_LOGIC; 
  signal leds_6_OBUF_28 : STD_LOGIC; 
  signal leds_7_OBUF_29 : STD_LOGIC; 
  signal pushButtons_0_IBUF_32 : STD_LOGIC; 
  signal pushButtons_1_IBUF_33 : STD_LOGIC; 
  signal seg7_0_OBUF_41 : STD_LOGIC; 
  signal seg7_1_OBUF_42 : STD_LOGIC; 
  signal seg7_2_OBUF_43 : STD_LOGIC; 
  signal seg7_3_OBUF_44 : STD_LOGIC; 
  signal seg7_4_OBUF_45 : STD_LOGIC; 
  signal seg7_5_OBUF_46 : STD_LOGIC; 
  signal seg7_6_OBUF_47 : STD_LOGIC; 
begin
  anodes_3_1 : LUT2
    generic map(
      INIT => X"7"
    )
    port map (
      I0 => pushButtons_0_IBUF_32,
      I1 => pushButtons_1_IBUF_33,
      O => anodes_3_OBUF_13
    );
  Mrom_anodes111 : LUT2
    generic map(
      INIT => X"1"
    )
    port map (
      I0 => pushButtons_0_IBUF_32,
      I1 => pushButtons_1_IBUF_33,
      O => anodes_1_OBUF_12
    );
  Mrom_anodes11 : LUT2
    generic map(
      INIT => X"2"
    )
    port map (
      I0 => pushButtons_0_IBUF_32,
      I1 => pushButtons_1_IBUF_33,
      O => anodes_0_OBUF_11
    );
  seg7_2_SW0 : LUT4
    generic map(
      INIT => X"5EDF"
    )
    port map (
      I0 => leds_3_OBUF_25,
      I1 => leds_0_OBUF_22,
      I2 => leds_2_OBUF_24,
      I3 => leds_1_OBUF_23,
      O => N13
    );
  seg7_2_Q : LUT3
    generic map(
      INIT => X"13"
    )
    port map (
      I0 => pushButtons_0_IBUF_32,
      I1 => N13,
      I2 => pushButtons_1_IBUF_33,
      O => seg7_2_OBUF_43
    );
  seg7_4_SW0 : LUT4
    generic map(
      INIT => X"AE8F"
    )
    port map (
      I0 => leds_3_OBUF_25,
      I1 => leds_1_OBUF_23,
      I2 => leds_0_OBUF_22,
      I3 => leds_2_OBUF_24,
      O => N15
    );
  seg7_4_Q : LUT3
    generic map(
      INIT => X"13"
    )
    port map (
      I0 => pushButtons_0_IBUF_32,
      I1 => N15,
      I2 => pushButtons_1_IBUF_33,
      O => seg7_4_OBUF_45
    );
  seg7_6_SW0 : LUT4
    generic map(
      INIT => X"4109"
    )
    port map (
      I0 => leds_3_OBUF_25,
      I1 => leds_2_OBUF_24,
      I2 => leds_1_OBUF_23,
      I3 => leds_0_OBUF_22,
      O => N17
    );
  seg7_6_Q : LUT3
    generic map(
      INIT => X"EA"
    )
    port map (
      I0 => N17,
      I1 => pushButtons_1_IBUF_33,
      I2 => pushButtons_0_IBUF_32,
      O => seg7_6_OBUF_47
    );
  seg7_5_SW0 : LUT4
    generic map(
      INIT => X"9AFB"
    )
    port map (
      I0 => leds_3_OBUF_25,
      I1 => leds_1_OBUF_23,
      I2 => leds_2_OBUF_24,
      I3 => leds_0_OBUF_22,
      O => N19
    );
  seg7_5_Q : LUT3
    generic map(
      INIT => X"13"
    )
    port map (
      I0 => pushButtons_0_IBUF_32,
      I1 => N19,
      I2 => pushButtons_1_IBUF_33,
      O => seg7_5_OBUF_46
    );
  seg7_1_SW0 : LUT4
    generic map(
      INIT => X"617F"
    )
    port map (
      I0 => leds_1_OBUF_23,
      I1 => leds_3_OBUF_25,
      I2 => leds_0_OBUF_22,
      I3 => leds_2_OBUF_24,
      O => N21
    );
  seg7_1_Q : LUT3
    generic map(
      INIT => X"13"
    )
    port map (
      I0 => pushButtons_0_IBUF_32,
      I1 => N21,
      I2 => pushButtons_1_IBUF_33,
      O => seg7_1_OBUF_42
    );
  seg7_3_SW0 : LUT4
    generic map(
      INIT => X"7B6D"
    )
    port map (
      I0 => leds_2_OBUF_24,
      I1 => leds_1_OBUF_23,
      I2 => leds_0_OBUF_22,
      I3 => leds_3_OBUF_25,
      O => N23
    );
  seg7_3_Q : LUT3
    generic map(
      INIT => X"13"
    )
    port map (
      I0 => pushButtons_0_IBUF_32,
      I1 => N23,
      I2 => pushButtons_1_IBUF_33,
      O => seg7_3_OBUF_44
    );
  seg7_0_SW0 : LUT4
    generic map(
      INIT => X"F76B"
    )
    port map (
      I0 => leds_3_OBUF_25,
      I1 => leds_0_OBUF_22,
      I2 => leds_2_OBUF_24,
      I3 => leds_1_OBUF_23,
      O => N25
    );
  seg7_0_Q : LUT3
    generic map(
      INIT => X"13"
    )
    port map (
      I0 => pushButtons_0_IBUF_32,
      I1 => N25,
      I2 => pushButtons_1_IBUF_33,
      O => seg7_0_OBUF_41
    );
  sliderSwitches_7_IBUF : IBUF
    port map (
      I => sliderSwitches(7),
      O => leds_7_OBUF_29
    );
  sliderSwitches_6_IBUF : IBUF
    port map (
      I => sliderSwitches(6),
      O => leds_6_OBUF_28
    );
  sliderSwitches_5_IBUF : IBUF
    port map (
      I => sliderSwitches(5),
      O => leds_5_OBUF_27
    );
  sliderSwitches_4_IBUF : IBUF
    port map (
      I => sliderSwitches(4),
      O => leds_4_OBUF_26
    );
  sliderSwitches_3_IBUF : IBUF
    port map (
      I => sliderSwitches(3),
      O => leds_3_OBUF_25
    );
  sliderSwitches_2_IBUF : IBUF
    port map (
      I => sliderSwitches(2),
      O => leds_2_OBUF_24
    );
  sliderSwitches_1_IBUF : IBUF
    port map (
      I => sliderSwitches(1),
      O => leds_1_OBUF_23
    );
  sliderSwitches_0_IBUF : IBUF
    port map (
      I => sliderSwitches(0),
      O => leds_0_OBUF_22
    );
  pushButtons_1_IBUF : IBUF
    port map (
      I => pushButtons(1),
      O => pushButtons_1_IBUF_33
    );
  pushButtons_0_IBUF : IBUF
    port map (
      I => pushButtons(0),
      O => pushButtons_0_IBUF_32
    );
  anodes_3_OBUF : OBUF
    port map (
      I => anodes_3_OBUF_13,
      O => anodes(3)
    );
  anodes_2_OBUF : OBUF
    port map (
      I => anodes_3_OBUF_13,
      O => anodes(2)
    );
  anodes_1_OBUF : OBUF
    port map (
      I => anodes_1_OBUF_12,
      O => anodes(1)
    );
  anodes_0_OBUF : OBUF
    port map (
      I => anodes_0_OBUF_11,
      O => anodes(0)
    );
  leds_7_OBUF : OBUF
    port map (
      I => leds_7_OBUF_29,
      O => leds(7)
    );
  leds_6_OBUF : OBUF
    port map (
      I => leds_6_OBUF_28,
      O => leds(6)
    );
  leds_5_OBUF : OBUF
    port map (
      I => leds_5_OBUF_27,
      O => leds(5)
    );
  leds_4_OBUF : OBUF
    port map (
      I => leds_4_OBUF_26,
      O => leds(4)
    );
  leds_3_OBUF : OBUF
    port map (
      I => leds_3_OBUF_25,
      O => leds(3)
    );
  leds_2_OBUF : OBUF
    port map (
      I => leds_2_OBUF_24,
      O => leds(2)
    );
  leds_1_OBUF : OBUF
    port map (
      I => leds_1_OBUF_23,
      O => leds(1)
    );
  leds_0_OBUF : OBUF
    port map (
      I => leds_0_OBUF_22,
      O => leds(0)
    );
  seg7_6_OBUF : OBUF
    port map (
      I => seg7_6_OBUF_47,
      O => seg7(6)
    );
  seg7_5_OBUF : OBUF
    port map (
      I => seg7_5_OBUF_46,
      O => seg7(5)
    );
  seg7_4_OBUF : OBUF
    port map (
      I => seg7_4_OBUF_45,
      O => seg7(4)
    );
  seg7_3_OBUF : OBUF
    port map (
      I => seg7_3_OBUF_44,
      O => seg7(3)
    );
  seg7_2_OBUF : OBUF
    port map (
      I => seg7_2_OBUF_43,
      O => seg7(2)
    );
  seg7_1_OBUF : OBUF
    port map (
      I => seg7_1_OBUF_42,
      O => seg7(1)
    );
  seg7_0_OBUF : OBUF
    port map (
      I => seg7_0_OBUF_41,
      O => seg7(0)
    );

end Structure;

