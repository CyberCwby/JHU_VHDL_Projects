library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;
use work.all;

--Entity to display a checkerboard pattern and move a red square through it
--clk_50:			INPUT		STD_LOGIC 			50MHz clock signal
--pushButtons:		INPUT		STD_LOGIC_VECTOR	4-bit pushButtons on Nexys2 Board
--sliderSwitch:	INPUT		STD_LOGIC			sliderSwitch0 on Nexys2 Board
--vgaRed:			OUTPUT	STD_LOGIC_VECTOR	3-bit signal for the Red portion of the RGB signal
--vgaGreen:			OUTPUT	STD_LOGIC_VECTOR	3-bit signal for the green portion of the RGB signal
--vgaBlue:			OUTPUT	STD_LOGIC_VECTOR	2-bit signal for the blue portion of the RGB signal
--hSync:				OUTPUT	STD_LOGIC			Horizontal Sync signal for the VGA monitor
--vSync:				OUTPUT	STD_LOGIC			Vertical sync signal for the VGA monitor
--an:					OUTPUT	STD_LOGIC_VECTOR	4-bit signal to determine active 7-segment display
--seg7:				OUTPUT	STD_LOGIC_VECTOR	7-bit signal to drive active 7-segment display
--leds:				OUTPUT	STD_LOGIC_VECTOR	8-bit signal to display the 8-bit counter

Entity lab5_topLevel is
Port(
		clk_50:				IN			STD_LOGIC;
		pushButtons:		IN			STD_LOGIC_VECTOR(3 downto 0);
		sliderSwitch:		IN			STD_LOGIC;
		vgaRed:				OUT		STD_LOGIC_VECTOR(2 downto 0);
		vgaGreen:			OUT		STD_LOGIC_VECTOR(2 downto 0);
		vgaBlue:				OUT		STD_LOGIC_VECTOR(1 downto 0);
		hSync:				OUT		STD_LOGIC;
		vSync:				OUT		STD_LOGIC;
		an:					OUT		STD_LOGIC_VECTOR(3 downto 0);
		seg7:					OUT		STD_LOGIC_VECTOR(6 downto 0);
		leds:					OUT		STD_LOGIC_VECTOR(7 downto 0)
);
end lab5_topLevel;

Architecture Behavioral of lab5_topLevel is
	signal en25:									STD_LOGIC;								--divided clock signal for 25MHz VGA driver
	signal debouncedPB:							STD_LOGIC_VECTOR(3 downto 0);		--signal for debouncing push buttons
	signal debouncedSS:							STD_LOGIC;								--signal for debounced slider switch
	signal counter:								unsigned(7 downto 0);				--counter to be displayed on LEDs
	signal en60:									STD_LOGIC;								--enable fo 60Hz refresh rate
	signal x_coords:								STD_LOGIC_VECTOR(7 downto 0);		--x-coordinate for the red square counting from upper left-hand corner of monitor
	signal y_coords:								STD_LOGIC_VECTOR(7 downto 0);		--y-coordinate for the red square counting from upper left-hand corner of monitor
	signal xincremented:							STD_LOGIC;								--signal to ensure single increment of x-coord
	signal yincremented:							STD_LOGIC;								--signal to ensure single increment of y-coord
	signal xcoordscntr:							unsigned(7 downto 0);				--signal for incrementing x-coord
	signal ycoordscntr:							unsigned(7 downto 0);				--signal for incrementing y-coord
begin
	
	--Instantiation of 25MHz pulse generator
	PULSE:		entity work.pulseGen25MHz Port map(clk_50,en25);
	--Instantiation of 60Hz pulse generator for incrementing counter to display on LEDs
	PULSE60HZ:	entity work.pulseGen60Hz port map (clk_50,sliderSwitch,en60);
	--Instantiations of Debouncers for pushButtons and sliderSwitches
	PB0DB:		entity work.debouncer Port map (clk_50,pushButtons(0),debouncedPB(0));
	PB1DB:		entity work.debouncer Port map (clk_50,pushButtons(1),debouncedPB(1));
	PB2DB:		entity work.debouncer Port map (clk_50,pushButtons(2),debouncedPB(2));
	PB3DB:		entity work.debouncer Port map (clk_50,pushButtons(3),debouncedPB(3));
	SS0DB:		entity work.debouncer Port map (clk_50,sliderSwitch,debouncedSS);
	--Instantiation of 7-segment driver to display coordinates of the red square
	SEG7DRVR:	entity work.seg7_driver Port map (clk_50,debouncedSS,y_coords(3 downto 0),y_coords(7 downto 4),x_coords(3 downto 0),x_coords(7 downto 4),an,seg7);
	--Instantiation of the VGA Driver
	VGADRV:		entity work.vgaDrvr	Port map (clk_50,en25,debouncedSS,x_coords,y_coords,vgaRed,vgaGreen,vgaBlue,hSync,vSync);
	
	--Proccess to increment the counter at a 60Hz refresh rate
	--reset asynchronously when debounced sliderSwitch goes high
	REFRESHCNT: process(debouncedSS,clk_50) is
	begin
		if(debouncedSS='1') then
			counter<=(others=>'0');
		else
			if(rising_edge(clk_50)) then
				if(en60='1') then
					counter<=counter+1;
				end if;
			end if;
		end if;
	end process;
	
	--Determines X-coordinates
	XCOORD: process(debouncedSS,clk_50) is
	begin
		if(debouncedSS='1') then 								--Asynchronous reset to default 0x00 coord in the upper lefthand of screen
			xcoordscntr<=(others=>'0');
		else	
			if(rising_edge(clk_50)) then
				if(xincremented='0') then 						--If button hasn't been pressed increment the coord
					if(debouncedPB(2)='1') then				--Push Button 2 moves the counter to the right, and wraps around at 0x13
						if(xcoordscntr="00010011") then
							xcoordscntr<=(others=>'0');
							xincremented<='1';					--push button went high, but hasn't gone back low
						else
							xcoordscntr<=xcoordscntr+1;
							xincremented<='1';					--push button went high, but hasn't gone back low		
						end if;
					elsif(debouncedPB(3)='1') then			--Push Button 3 moves the counter to the left and wraps around at 0x00
						if(xcoordscntr="00000000") then
							xcoordscntr<="00010011";
							xincremented<='1';					--push button went high, but hasn't gone back low
						else
							xcoordscntr<=xcoordscntr-1;
							xincremented<='1';					--push button went high, but hasn't gone back low
						end if;
					end if;
				else
					if(debouncedPB(3 downto 2)="00") then	--If the buttons have gone back low, reset and allow the counter to be incremented on next press
						xincremented<='0';
					end if;
				end if;
			end if;
		end if;
	end process;
	x_coords<=STD_LOGIC_VECTOR(xcoordscntr);				--Assigns xcoordscntr to the x_coords signal to be input for the vgaDrvr
	
	
	--Sets Y-coordinate
	YCOORD: process(debouncedSS,clk_50) is
		begin
		if(debouncedSS='1') then 								--Asynchronous reset to 0x00, upper left-hand corner of screen
			ycoordscntr<=(others=>'0');
		else
			if(rising_edge(clk_50)) then
				if(yincremented='0') then 						--If button hasn't been pressed, allow the counter to be incremented
					if(debouncedPB(1)='1') then				--Push button 1 moves the red square down and wraps around at 0x0e
						if(ycoordscntr="00001110") then
							ycoordscntr<=(others=>'0');
							yincremented<='1';					--push button went high, but hasn't gone back low
						else
							ycoordscntr<=ycoordscntr+1;
							yincremented<='1';
						end if;
					elsif(debouncedPB(0)='1') then			--Push button 0 moves the red square up and wraps around at 0x00
						if(ycoordscntr="00000000") then
							ycoordscntr<="00001110";
							yincremented<='1';					--push button went high, but hasn't gone back low
						else
							ycoordscntr<=ycoordscntr-1;
							yincremented<='1';					--push button went high, but hasn't gone back low
						end if;
					end if;
				else
					if(debouncedPB(1 downto 0)="00") then	--Push buttons have gone low, and allows coordinate to be updated again
						yincremented<='0';						
					end if;
				end if;
			end if;
		end if;
	end process;
	y_coords<=STD_LOGIC_VECTOR(ycoordscntr);				--assigns the ycoordscntr to the y_coords signal to be input for the vgaDrvr
	leds<=STD_LOGIC_VECTOR(counter);							--assigns the 8-bit counter to the LEDs
end Behavioral;