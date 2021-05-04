`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:53:28 03/02/2021 
// Design Name: 
// Module Name:    cal_p_g 
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
module cal_p_g(
    input [3:0] A,
    input [3:0] B,
    input [3:0] S,
    output [3:0] p,
    output [3:0] g
    );
	 
	 cal_p_bit calp0 (A[0], B[0], S[0], S[1], p[0]);
	 cal_p_bit calp1 (A[1], B[1], S[0], S[1], p[1]);
	 cal_p_bit calp2 (A[2], B[2], S[0], S[1], p[2]);
	 cal_p_bit calp3 (A[3], B[3], S[0], S[1], p[3]);
	 
	 cal_g_bit calg0 (A[0], B[0], S[2], S[3], g[0]);
	 cal_g_bit calg1 (A[1], B[1], S[2], S[3], g[1]);
	 cal_g_bit calg2 (A[2], B[2], S[2], S[3], g[2]);
	 cal_g_bit calg3 (A[3], B[3], S[2], S[3], g[3]);

endmodule
