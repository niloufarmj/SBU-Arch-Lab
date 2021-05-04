`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:50:45 04/11/2021 
// Design Name: 
// Module Name:    el_state_machine 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module el_state_machine(
    input F1,
    input F2,
    input F3,
    input U1,
    input D1,
    input U2,
    input D2,
    input U3,
    input D3,
    input S1,
    input S2,
    input S3,
	 input RST,
    input CLK,
    output reg [1:0] AC,
    output reg [1:0] DISP,
    output reg open
    );
	 
		reg [2:0] state, nextState;
		parameter S10 = 3'b000,
					 S11 = 3'b001,
					 S20UP = 3'b010,
					 S20DOWN = 3'b011,
					 S21 = 3'b100,
					 S30 = 3'b101,
					 S31 = 3'b110;
		parameter UP = 2'b10,
					 DOWN = 2'b01,
					 STOP = 2'b00;
					 
		always @(posedge CLK or posedge RST)
			if (RST)
				state <= S11;
			else
				state <= nextState;
		
		always @(*)
		begin
			case(state)
		
				S11: 
				begin
					DISP <= 2'b01;
					AC <= STOP;
					open <= 1;
					//F1 <= 0;
					if (F2 == 1'b1 || U2 == 1'b1 || D2 == 1'b1 || F3 == 1'b1 || D3 == 1'b1)
						nextState <= S10;
				end
				
				S10:
				begin
					DISP <= 2'b01;
					AC <= UP;
					open <= 0;
					if (F2 == 1 || U2 == 1)
						nextState <= S21;
					else if (D2 == 1 && F3 == 0 && D3 == 0)
						nextState <= S21;
					else if (F3 == 1 || D3 == 1)
						nextState <= S20UP;
					else if (F1 == 1 || U1 == 1)
						nextState <= S11;
				end
				
				S21: 
				begin
					DISP <= 2'b10;
					AC <= STOP;
					open <= 1;
					//F2 <= 0;
					if (F3 == 1 || D3 == 1)
						nextState <= S20UP;
					else if (F1 == 1 || U1 == 1)
						nextState <= S20DOWN;
				end
				
				S20UP: 
				begin
					DISP <= 2'b10;
					AC <= UP;
					open <= 0;
					if (F3 == 1 || D3 == 1)
						nextState <= S31;
					else if (F2 == 1 || U2 == 1)
						nextState <= S21;
				end
				
				S20DOWN: 
				begin
					DISP <= 2'b10;
					AC <= DOWN;
					open <= 0;
					if (F1 == 1 || U1 == 1)
						nextState <= S11;
					else if (F2 == 1 || D2 == 1)
						nextState <= S21;
				end
				
				S31:
				begin
					DISP <= 2'b11;
					AC <= STOP;
					open <= 1;
					//F3 <= 0;
					if (F1 == 1 || U1 == 1 || F2 == 1 || U2 == 1 || D2 == 1)
						nextState <= S30;
				end
				
				S30:
				begin
					DISP <= 2'b11;
					AC <= DOWN;
					open <= 0;
					if (F2 == 1 | U2 == 1 | D2 == 1)
						nextState <= S21;
					else if (F1 == 1 | D1 == 1)
						nextState <= S20DOWN;
					else if (F3 == 1 | D3 == 1)
						nextState <= S31;
				end
			endcase	
		end				
endmodule
