`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:07:40 03/02/2021 
// Design Name: 
// Module Name:    cal_sigma 
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
module cal_sigma(
    input [3:0] p,
    input [3:0] g,
    output [3:0] sigma
    );
	 
	 cal_sigma_bit calsigma0 (p[0], g[0], sigma[0]);
	 cal_sigma_bit calsigma1 (p[1], g[1], sigma[1]);
	 cal_sigma_bit calsigma2 (p[2], g[2], sigma[2]);
	 cal_sigma_bit calsigma3 (p[3], g[3], sigma[3]);

endmodule
