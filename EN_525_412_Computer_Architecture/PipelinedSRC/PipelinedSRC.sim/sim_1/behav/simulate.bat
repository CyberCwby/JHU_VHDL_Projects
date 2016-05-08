@echo off
set xv_path=C:\\Xilinx\\Vivado\\2015.4\\bin
call %xv_path%/xsim cfg_tb_top_src_behav -key {Behavioral:sim_1:Functional:cfg_tb_top_src} -tclbatch cfg_tb_top_src.tcl -log simulate.log
if "%errorlevel%"=="0" goto SUCCESS
if "%errorlevel%"=="1" goto END
:END
exit 1
:SUCCESS
exit 0
