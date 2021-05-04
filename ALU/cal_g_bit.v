`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:00:06 03/02/2021 
// Design Name: 
// Module Name:    cal_g_bit 
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
module cal_g_bit(
    input a,
    input b,
    input s2,
	 input s3,
    output g
    );

	wire abnots2, bnot, abs3;
	not not1 (bnot, b);
	and and1 (abnots2, a, bnot, s2);
	and and2 (abs3, a, b, s3);
	or orAll (g, abnots2, abs3);

endmodule
