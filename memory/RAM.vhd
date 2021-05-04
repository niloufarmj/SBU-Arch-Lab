----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:02:14 03/27/2021 
-- Design Name: 
-- Module Name:    RAM - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
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
USE IEEE.std_logic_arith.ALL; 

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity RAM is
    Port ( Din : in  STD_LOGIC_VECTOR (7 downto 0);
           Addr : in  STD_LOGIC_VECTOR (7 downto 0);
           RST : in  STD_LOGIC;
           EN : in  STD_LOGIC;
           WE : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           DOut : out  STD_LOGIC_VECTOR (7 downto 0));
end RAM;

architecture RTL of RAM is
TYPE RAM_8 IS ARRAY (0 TO 255)OF STD_LOGIC_VECTOR(7 DOWNTO 0);
SIGNAL RAM_PTR:RAM_8;
SIGNAL Read_Addr : std_logic_vector(7 downto 0);   
BEGIN
	PROCESS(CLK)
	BEGIN
		IF RST = '1' THEN
			DOut <= (others => '0');
		ELSIF (CLK'event and CLK = '1') THEN
			IF EN = '1' THEN
				IF WE = '1' THEN
					RAM_PTR(CONV_INTEGER(unsigned(Addr))) <= Din;
				END IF; 
				Read_Addr <= Addr;
			END IF;
		END IF;
	END PROCESS;
	DOut <= std_logic_vector(RAM_PTR(CONV_INTEGER(unsigned(Read_Addr))));
END RTL;


