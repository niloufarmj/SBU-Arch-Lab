`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:08:15 04/09/2021
// Design Name:   RAM_MODULE_CG
// Module Name:   D:/uni/arch lab projects/project 4/memory/RAM_CG_tb.v
// Project Name:  memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM_MODULE_CG
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RAM_CG_tb;

	// Inputs
	reg [7:0] Din;
	reg [7:0] Addr;
	reg RST;
	reg EN;
	reg WE;
	reg CLK;

	// Outputs
	wire [7:0] Dout;

	// Instantiate the Unit Under Test (UUT)
	RAM_MODULE_CG uut (
		.Din(Din), 
		.Addr(Addr), 
		.RST(RST), 
		.EN(EN), 
		.WE(WE), 
		.CLK(CLK), 
		.Dout(Dout)
	);

	initial 
	begin	
		CLK = 1'b1;
		RST = 0;
		forever #25 CLK = ~CLK;
	end
	
	integer i;
	initial 
	begin 
		
		WE = 1'b1;
		EN = 1'b1;
		
		for (i = 1; i < 11; i=i+1) 
		begin
		#50
			Din = i;
			Addr = i-1;
			EN = ~EN; //ba ezafe shdne in yek khat be barname mitavan karayi e signal e EN ra moshahde kard
		end
		
		WE = 1'b0;
		for (i = 1; i < 11; i = i + 1)
		begin 
		#50
			Addr = i-1;
		end
			
	end
      
endmodule

