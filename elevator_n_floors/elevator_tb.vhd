
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

ENTITY elevator_tb IS
END elevator_tb;
 
ARCHITECTURE behavior OF elevator_tb IS 
 
 
    COMPONENT elevator
    GENERIC (n : integer := 6);
    PORT(
         nrst : IN  std_logic;
         clk : IN  std_logic;
         come : IN  std_logic_vector(5 downto 0);
         go : IN  std_logic_vector(5 downto 0);
         switch : IN  std_logic_vector(5 downto 0);
         door_open : IN  std_logic;
         door_close : IN  std_logic;
         fanin : IN  std_logic;
         motor_up : OUT  std_logic;
         motor_down : OUT  std_logic;
         elevator_state : OUT  std_logic_vector(6 downto 0);
         open_door_motor : OUT  std_logic;
         close_door_motor : OUT  std_logic;
         fanout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal nrst : std_logic := '0';
   signal clk : std_logic := '0';
   signal come : std_logic_vector(5 downto 0) := (others => '0');
   signal go : std_logic_vector(5 downto 0) := (others => '0');
   signal switch : std_logic_vector(5 downto 0) := (others => '0');
   signal door_open : std_logic := '0';
   signal door_close : std_logic := '0';
   signal fanin : std_logic := '0';

 	--Outputs
   signal motor_up : std_logic;
   signal motor_down : std_logic;
   signal elevator_state : std_logic_vector(6 downto 0);
   signal open_door_motor : std_logic;
   signal close_door_motor : std_logic;
   signal fanout : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: elevator PORT MAP (
          nrst => nrst,
          clk => clk,
          come => come,
          go => go,
          switch => switch,
          door_open => door_open,
          door_close => door_close,
          fanin => fanin,
          motor_up => motor_up,
          motor_down => motor_down,
          elevator_state => elevator_state,
          open_door_motor => open_door_motor,
          close_door_motor => close_door_motor,
          fanout => fanout
        );

  nrst     <= '0' , '1' AFTER 15 ns ;
	clk      <= NOT clk AFTER 5 ns;
	come     <= "000000", "000001" AFTER 35 ns, "000000" AFTER 70 ns;
	go       <= "000010", "001000" AFTER 35 ns;
  fanin    <= '0', '1' AFTER 50 ns, '0' AFTER 60 ns, '1' AFTER 100 ns, '0' AFTER 110 ns; 

END;
