@echo off
set xv_path=C:\\Xilinx\\Vivado\\2015.4\\bin
call %xv_path%/xelab  -wto 155984185a7b489696a02b933cafc701 -m64 --debug typical --relax --mt 2 -L xil_defaultlib -L secureip --snapshot cfg_tb_top_src_behav xil_defaultlib.cfg_tb_top_src -log elaborate.log
if "%errorlevel%"=="0" goto SUCCESS
if "%errorlevel%"=="1" goto END
:END
exit 1
:SUCCESS
exit 0
