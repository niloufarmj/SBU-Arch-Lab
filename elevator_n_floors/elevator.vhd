LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.std_logic_unsigned.all;

ENTITY elevator IS
    GENERIC (n : integer := 6);
	PORT(
	nrst            : IN std_logic;
	clk             : IN std_logic;
	come            : IN std_logic_vector(n-1 DOWNTO 0);
	go              : IN std_logic_vector(n-1 DOWNTO 0);
	switch          : IN std_logic_vector(n-1 DOWNTO 0);
    door_open       : IN std_logic;
    door_close      : IN std_logic;
    fanin           : IN std_logic;
	motor_up        : OUT std_logic;
	motor_down      : OUT std_logic;
	elevator_state  : OUT std_logic_vector(n DOWNTO 0);
	open_door_motor : OUT std_logic;
    close_door_motor: OUT std_logic;
    fanout          : OUT std_logic
	);
END elevator;

ARCHITECTURE mealy OF elevator IS
	TYPE   state IS(s_first_stop_open, s_first_stop_close, s_middle_stop_open, s_middle_stop_close, s_middle_up, s_middle_down, s_last_down, s_last_stop_open, s_last_stop_close);
	SIGNAL curr_state            : state := s_first_stop_open;
	SIGNAL next_state            : state;
	SIGNAL temp_up, temp_down    : std_logic;
    SIGNAL temp_open, temp_close : std_logic;
    SIGNAL current_floor         : integer;
    SIGNAL temp_el_state         : std_logic_vector(n DOWNTO 0);
    SIGNAL temp_fan              :std_logic := '0';
BEGIN

	com: PROCESS(clk, come, go, curr_state)
	BEGIN
		IF curr_state = s_first_stop_close THEN
            temp_down <= '0';
            temp_up <= '0';
            current_floor <= 0;
            temp_open  <= '0';
            temp_close <= '1';
            temp_el_state <= (OTHERS => '0');
            temp_el_state(0) <= '1';
            temp_el_state(n) <= '0';
            IF come(0) = '1' or go(0) = '1' or door_open = '1' THEN
                next_state <= s_first_stop_open;
            ELSE
                FOR I in 1 to n-1 loop
                    IF come(I) = '1' or go(I) = '1' THEN 
                        next_state    <= s_middle_up;
                        current_floor <=  1 ;
                        exit;
                    END IF;
                END loop;
            END IF;
		
        ELSIF curr_state = s_first_stop_open THEN
            temp_down <= '0';
            temp_up <= '0';
            current_floor <= 0;
            temp_open  <= '1';
            temp_close <= '0';
            temp_el_state <= (OTHERS => '0');
            temp_el_state(0) <= '1';
            temp_el_state(n) <= '0';
            IF door_close = '1' THEN
                next_state <= s_first_stop_close;
            ELSE
                FOR I in 1 to n-1 loop
                    IF come(I) = '1' or go(I) = '1' THEN 
                        next_state    <= s_first_stop_close;
                        exit;
                    END IF;
                END loop;
            END IF;

		ELSIF curr_state = s_middle_up THEN
            temp_up <= '1';
            temp_down <= '0';
            temp_open <= '0';
            temp_close <= '1';
            temp_el_state <= (OTHERS => '0');
            temp_el_state(current_floor) <= '1';
            temp_el_state(n) <= '1';
            IF come(current_floor) = '1' or go(current_floor) = '1' THEN
                next_state <= s_middle_stop_open;
            ELSIF current_floor = n-2 and (come(n-1) = '1' or go(n-1) = '1') THEN
                next_state    <= s_last_stop_open;
                current_floor <= current_floor + 1;
            ELSE
                FOR I in current_floor+1 to n-1 loop
                    IF come(I) = '1' or go(I) = '1' THEN 
                        next_state    <= s_middle_up;
                        current_floor <= current_floor + 1;
                        exit;
                    END IF;
                END loop;
            END IF;


		ELSIF curr_state = s_middle_down THEN
            temp_up <= '0';
            temp_down <= '1';
            temp_open <= '0';
            temp_close <= '1';
            temp_el_state <= (OTHERS => '0');
            temp_el_state(current_floor) <= '1';
            temp_el_state(n) <= '1';
            IF come(current_floor) = '1' or go(current_floor) = '1' THEN
                next_state <= s_middle_stop_open;
            ELSIF current_floor = 1 and (come(0) = '1' or go(0) = '1') THEN
                next_state    <= s_first_stop_open;
                current_floor <= current_floor - 1;
            ELSE
                FOR I in current_floor-1 DOWNTO 0 loop
                    IF come(I)= '1' or go(I) = '1' THEN 
                        next_state    <= s_middle_down;
                        current_floor <= current_floor - 1;
                    exit;
                    END IF;
                END loop;
            END IF;

        ELSIF curr_state = s_middle_stop_open THEN
            temp_close <= '0';
            temp_open <= '1';
            temp_up <= '0';
            temp_down <= '0';
            temp_el_state <= (OTHERS => '0');
            temp_el_state(current_floor) <= '1';
            temp_el_state(n) <= '0';
            IF door_close = '1' THEN
                next_state <= s_middle_stop_close;
            ELSE
                FOR I in 0 to n-1 loop
                    IF come(I) = '1' or go(I) = '1' THEN 
                        next_state <= s_middle_stop_close;
                        exit;
                    END IF;
                END loop;
            END IF;

        ELSIF curr_state = s_middle_stop_close THEN
            temp_close <= '0';
            temp_open <= '1';
            temp_up <= '0';
            temp_down <= '0';
            temp_el_state <= (OTHERS => '0');
            temp_el_state(current_floor) <= '1';
            temp_el_state(n) <= '0';
            IF door_open = '1' or go(current_floor) = '1' or come(current_floor) = '1' THEN
                next_state <= s_middle_stop_open;
            ELSE
                FOR I in 0 to n-1 loop
                    IF come(I) = '1' or go(I) = '1' THEN 
                        IF I > current_floor THEN
                            next_state    <= s_middle_up;
                        ELSE
                            next_state    <= s_middle_down;
                        END IF;
                        exit;
                    END IF;
                END loop;
            END IF;

		ELSIF curr_state = s_last_stop_close THEN
            temp_up    <= '0';
            temp_down  <= '0';
            temp_open  <= '0';
            temp_close <= '1';
            temp_el_state <= (OTHERS => '0');
            temp_el_state(current_floor) <= '1';
            temp_el_state(n) <= '0';
            IF come(n-1) = '1' or go(n-1) = '1' or door_open = '1' THEN
                next_state <= s_last_stop_open;
            ELSE
                FOR I in n-2 DOWNTO 0 loop
                    IF come(I) = '1' or go(I) = '1' THEN 
                        next_state    <= s_middle_down;
                        current_floor <= n-2;
                        exit;
                    END IF;
                END loop;
            END IF;
        
        ELSE
            temp_up    <= '0';
            temp_down  <= '0';
            temp_open  <= '1';
            temp_close <= '0';
            temp_el_state <= (OTHERS => '0');
            temp_el_state(current_floor) <= '1';
            temp_el_state(n) <= '0';
            IF door_close = '1' THEN
                next_state <= s_last_stop_close;
            ELSE
                FOR I in n-2 DOWNTO 0 loop
                    IF come(I) = '1' or go(I) = '1' THEN 
                        next_state    <= s_last_stop_close;
                        exit;
                    END IF;
                END loop;
            END IF;
		END IF;
	END PROCESS com;

	motor_up         <= temp_up;
	motor_down       <= temp_down;
    open_door_motor  <= temp_open;
    close_door_motor <= temp_close;
    elevator_state <= temp_el_state;
    fanout <= temp_fan;


	seq: PROCESS(nrst, clk, switch)
	BEGIN
        IF nrst = '0' THEN 
            curr_state <= s_first_stop_close;
        ELSE
            IF fanin = '1' and fanin'EVENT THEN
                temp_fan <= not temp_fan;
            END IF;
            IF clk = '1' and clk'event THEN 
                curr_state <= next_state;
            END IF;
            --IF    (next_state = s_first_stop_close or next_state = s_first_stop_open) THEN 
            --    curr_state <= next_state;
           -- ELSIF (next_state = s_last_stop_close or next_state = s_last_stop_open)  THEN 
            --    curr_state <= next_state;
           -- ELSE 
           --     FOR I in 1 to n-2 loop 
           --         IF (next_state = s_middle_up or next_state = s_middle_down or next_state = s_middle_stop_open or next_state = s_middle_stop_close) THEN 
           --             curr_state <= next_state;
           --             exit;
            --        END IF;
           --     END loop;
           -- END IF;
            
            -- IF    switch(0) = '1' THEN 
            --     current_floor <= 0;
            -- ELSIF switch(n-1) = '1' THEN 
            --     current_floor <= n-1;
            -- ELSE
            --     FOR I in 1 to n-1 loop
            --         IF switch(I) = '1' THEN
            --             current_floor = I;
            --             exit;
            --         END IF;
            --     END loop;
            -- END IF;
            

        END IF;
	END PROCESS seq;		 
END mealy;
