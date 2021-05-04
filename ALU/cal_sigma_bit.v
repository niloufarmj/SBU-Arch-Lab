`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:08:14 03/02/2021 
// Design Name: 
// Module Name:    cal_sigma_bit 
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
module cal_sigma_bit(
    input p,
    input g,
    output sigma
    );
	
	wire pnot, gnot;
	not not1 (pnot, p);
	not not2 (gnot, g);
	xor xorAll (sigma, pnot, gnot);

endmodule
