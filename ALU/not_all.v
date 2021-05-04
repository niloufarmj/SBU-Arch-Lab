`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:58:11 03/03/2021 
// Design Name: 
// Module Name:    not_all 
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
module not_all(
    input [3:0] in,
    output [3:0] out
    );
	 
	 not not0 (out[0], in[0]);
	 not not1 (out[1], in[1]);
	 not not2 (out[2], in[2]);
	 not not3 (out[3], in[3]);


endmodule
