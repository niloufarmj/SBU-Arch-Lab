`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:35:12 03/29/2021 
// Design Name: 
// Module Name:    memory_array 
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
module memory_array(
    input [7:0] Din,
    input CLK,
    input WE,
    input [7:0] WR_PTR,
    input [7:0] RD_PTR,
    output [7:0] Dout
    );

	reg[7:0] temp_Dout[255:0];  
	
	always @(posedge CLK)  
	begin  
		if(WE)   
			temp_Dout[WR_PTR] <= Din ;  
	end  
	assign Dout = temp_Dout[RD_PTR];  
	
endmodule
