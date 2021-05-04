`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:56:22 03/02/2021 
// Design Name: 
// Module Name:    cal_p_bit 
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
module cal_p_bit(
    input a,
    input b,
    input s0,
    input s1,
    output p
    );

	wire bs0, bnot, bnots1;
	and and1 (bs0, b, s0);
	not not1 (bnot, b);
	and and2 (bnots1, bnot, s1);
	or orAll (p, a, bs0, bnots1);
	
endmodule
