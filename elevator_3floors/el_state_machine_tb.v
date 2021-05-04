`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:55:28 04/12/2021
// Design Name:   el_state_machine
// Module Name:   D:/uni/arch lab projects/elevator/el_state_machine_tb.v
// Project Name:  elevator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: el_state_machine
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module el_state_machine_tb;

	// Inputs
	reg F1;
	reg F2;
	reg F3;
	reg U1;
	reg D1;
	reg U2;
	reg D2;
	reg U3;
	reg D3;
	reg S1;
	reg S2;
	reg S3;
	reg RST;
	reg CLK;

	// Outputs
	wire [1:0] AC;
	wire [1:0] DISP;
	wire open;

	// Instantiate the Unit Under Test (UUT)
	el_state_machine uut (
		.F1(F1), 
		.F2(F2), 
		.F3(F3), 
		.U1(U1), 
		.D1(D1), 
		.U2(U2), 
		.D2(D2), 
		.U3(U3), 
		.D3(D3), 
		.S1(S1), 
		.S2(S2), 
		.S3(S3), 
		.RST(RST), 
		.CLK(CLK), 
		.AC(AC), 
		.DISP(DISP), 
		.open(open)
	);
	
	initial begin	
		CLK = 1'b1;
		RST = 0;
		forever #25 CLK = ~CLK;
	end
	
	
	initial begin 
	
		F1 = 0;
		F2 = 0;
		F3 = 0;
		U1 = 0;
		D1 = 0;
		U2 = 0;
		D2 = 0;
		U3 = 0;
		D3 = 0;
		S1 = 0;
		S2 = 0;
		S3 = 0;
		RST = 1;
		
		// Wait 100 ns for global reset to finish
	#100
	RST = 0;
	
	F3 = 1;
	S1 = 1;
	S2 = 0;
	S3 = 0;
	
	#50
	
	U2 = 1;
	
	#50
	
	F1 = 1;
	S1 = 0;
	S2 = 1;
	S3 = 0;
	
	#50
	
	U2 = 0;
	
	#50
	
	F3 = 0; 
	S1 = 0;
	S2 = 0;
	S3 = 1;
	
	#100
	
	S1 = 0;
	S2 = 1;
	S3 = 0;
	
	#50
	
	F1 = 0;
	S1 = 1;
	S2 = 0;
	S3 = 0;
	D3 = 1;
	
	#50
	
	D2 = 1;
	
	#50
	
	S1 = 0;
	S2 = 1;
	S3 = 0;
	
	#50
	
	D3 = 0;
	S1 = 0;
	S2 = 0;
	S3 = 1;
	
	#100
	
	D2 = 0;
	U1 = 1;
	S1 = 0;
	S2 = 1;
	S3 = 0;
	
	#100
	
	F2 = 1;
	U1 = 0;
	S1 = 1;
	S2 = 0;
	S3 = 0;
	
	#100
	
	S1 = 0;
	S2 = 1;
	S3 = 0;
	
	#50
	
	F2 = 0; 
	RST = 1;
	S1 = 0;
	S2 = 0;
	S3 = 0;
	
	end

      
endmodule

