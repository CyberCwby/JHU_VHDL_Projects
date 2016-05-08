library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use work.all;


--Entity VGA Driver:  Generates the sync signals and drives the VGA RGB signals to display a blue and green checkerboard with 1 square being red, determined by the x and y coords
--clk_50:		IN			STD_LOGIC				50 MHz Clock signal
--en25:			IN			STD_LOGIC				25 MHz enable signal
--reset:			IN			STD_LOGIC				Asynchronous reset signal
--xcoord:		IN			STD_LOGIC_VECTOR		8-bit signal representing the X coordinate of the red square
--ycoord:		IN			STD_LOGIC_VECTOR		8-bit signal representing the y coordinate of the red square
--vgaRed:		OUT		STD_LOGIC_VECTOR		3-bit signal for the red portion of the VGA's RGB signal
--vgaGreen:		OUT		STD_LOGIC_VECTOR		3-bit signal for the green portion of the VGA's RGB signal
--vgaBlue:		OUT		STD_LOGIC_VECTOR		2-bit signal for the blue portion of the VGA's RGB signal
--hSync:			OUT		STD_LOGIC				Horizontal sync for the Monitor
--vSync:			OUT		STD_LOGIC				Vertical sync for the Monitor
Entity vgaDrvr is Port
(
	clk_50:		IN			STD_LOGIC;
	en25:			IN			STD_LOGIC;
	reset:		IN			STD_LOGIC;
	xcoord:		IN			STD_LOGIC_VECTOR(7 downto 0);
	ycoord:		IN			STD_LOGIC_VECTOR(7 downto 0);
	vgaRed:		OUT		STD_LOGIC_VECTOR(2 downto 0);
	vgaGreen:	OUT		STD_LOGIC_VECTOR(2 downto 0);
	vgaBlue:		OUT		STD_LOGIC_VECTOR(1 downto 0);
	hSync:		OUT		STD_LOGIC;
	vSync:		OUT		STD_LOGIC
);
End Entity vgaDrvr;

Architecture Behavioral of vgaDrvr is
	signal horizontal_counter:					unsigned(9 downto 0):="0000000000";		--Counter signal to determine horizontal location
	signal vertical_counter:					unsigned(9 downto 0):="0000000000";		--Counter signal to determine vertical location
	signal vgaGreenT,vgaBlueT,vgaRedT:		STD_LOGIC;										--Temporary signals to determine color of the square
	signal horizontal_reset:					STD_LOGIC;										--Signal to increment the vertical counter when the horizontal counter loops around
	signal row,column:							unsigned(9 downto 0);						--Signals to determine current row and column to be displayed

begin
	
	--Updates the counters relating to the horizontal and vertical positions
	UPDATECOUNTERS:process(clk_50,reset) is
	begin
		if(reset='1') then												--Asynchronous reset when slider switch goes high
			horizontal_counter<=(others=>'0');						--clears both counters
			vertical_counter<=(others=>'0');
		elsif(rising_edge(clk_50)) then
			if(en25='1') then
				if(horizontal_counter<800) then						--increments the horizontal counter and wraps it back around when it hits 799
					horizontal_counter<=horizontal_counter+1;
				else
					horizontal_counter<=(others=>'0');
					horizontal_reset<='1';
				end if;
				if(horizontal_reset='1') then							--when horizontal counter wraps around, increment the vertical counter
					if(vertical_counter<521) then						--increment vertical counter until it hits 520
						vertical_counter<=vertical_counter+1;
						horizontal_reset<='0';							--clears the horizontal reset signal to allow it to be set when the horizontal counter wraps around again
					else
						vertical_counter<=(others=>'0');
						horizontal_reset<='0';
					end if;
				end if;
			end if;
		end if;
	end process;
	
	hSync<= '0' when((656<=horizontal_counter) AND (horizontal_counter<752)) else '1';	--Sets the horizontal sync low when the counter is between [656, 752)
	vSync<='0' when ((490<=vertical_counter) AND (vertical_counter<492)) else '1';		--Sets the vertical sync low when the counter is between [490, 492)

	--divides the 2 counters into the appropriate 32-pixel wide rows and columns
	row<=vertical_counter/32 when (vertical_counter<480) else (others=>'0');
	column<=horizontal_counter/32 when (horizontal_counter<640) else (others=>'0');
	
	
	--Draws the checkerboard using modulo 2 arithmetic
	--For even rows (row mod 2)=0) green squares are in the even colums.  For odd rows, they are in the odd columns
	--Blue squares can be drawn when the square is not green or red.
	--When the counters are between [xcoord*32, (xcoord*32)+32) and [ycoord*32,(ycoord*32)+32) color it red
	vgaRedT<='1' when ((row=unsigned(ycoord)) AND (column=unsigned(xcoord))) else '0';
	vgaGreenT<='1' when (((((row mod 2)=0) AND ((column mod 2)=0)) OR (((row mod 2)=1) AND ((column mod 2)=1)))) else '0';
	vgaBlueT<= not vgaGreenT;
	vgaRed<=(others=>vgaRedT);
	vgaGreen<=(others=>vgaGreenT) when vgaRedT='0' else (others=>'0');
	vgaBlue<=(others=>vgaBlueT) when vgaRedT='0' else (others=>'0');

End Behavioral;