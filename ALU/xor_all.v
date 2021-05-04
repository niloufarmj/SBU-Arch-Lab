`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:20:55 03/03/2021 
// Design Name: 
// Module Name:    xor_all 
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
module xor_all(
    input [3:0] in1,
    input [3:0] in2,
    output [3:0] out
    );
	
	xor xor0 (out[0], in1[0], in2[0]);
	xor xor1 (out[1], in1[1], in2[1]);
	xor xor2 (out[2], in1[2], in2[2]);
	xor xor3 (out[3], in1[3], in2[3]);

endmodule
