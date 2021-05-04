`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:51:39 03/03/2021
// Design Name:   ALU74181
// Module Name:   D:/uni/arch lab projects/project 2/ALU/ALU_test.v
// Project Name:  project2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU74181
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_test;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg [3:0] S;
	reg M;
	reg C_n;

	// Outputs
	wire finalP;
	wire finalG;
	wire [3:0] F;
	wire eq;
	wire C_nplus4;

	// Instantiate the Unit Under Test (UUT)
	ALU74181 uut (
		.A(A), 
		.B(B), 
		.S(S), 
		.M(M), 
		.C_n(C_n), 
		.finalP(finalP), 
		.finalG(finalG), 
		.F(F), 
		.eq(eq), 
		.C_nplus4(C_nplus4)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		S = 0;
		M = 0;
		C_n = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
		A = 4'b0001;
		B = 4'b0011;
		M = 1'b0;
		C_n = 1'b1;
		
		S = 4'b1001;
		// A plus B
		
		#50 
		S = 4'b0000;
		//A
		
		#50
		M = 1'b1;
		//A'
		
		#50 
		S = 4'b0001;
		//(A + B)'
		
		#50
		M = 1'b0;
		// A + B
		
		#50
		S = 4'b0010;
		//A + B` plus cn 
		
		#50
		M = 1'b1;
		//A'B
		
		#50
		S = 4'b0100;
		//(AB)'
		
		#50
		M = 1'b0;
		//A plus AB` 
		
		#50 
		S = 4'b0101;
		//(A+B) plus AB` 
		
		#50
		M = 1'b1;
		//B'
		
		#50
		S = 4'b1101;
		//A + B'
		
		#50
		M = 1'b0;
		//(A+B) plus A
		
		#50
		S = 4'b1110;
		//(A+B) plus B` 
		
		#50
		M = 1'b1;
		//A + B
		
		#50
		S = 4'b1111;
		// A
		
		#50
		M = 1'b0;
		// A minus 1 

	end
      
endmodule

