`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:55:40 03/27/2021 
// Design Name: 
// Module Name:    FIFO 
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
module FIFO(
    input [7:0] Din,
    input RST,
    input RD_EN,
    input WR_EN,
	 input CLK,
    output Empty,
    output Full, 
    output [7:0] Dout
    );

	wire[8:0] WR_PTR, RD_PTR;
	wire WE; 	
	
	write_pointer wp (.WR_PTR(WR_PTR), .WE(WE), .WR_EN(WR_EN), .Full(Full), .CLK(CLK), .RST(RST));  
	read_pointer rp (.RD_PTR(RD_PTR), .RD_EN(RD_EN), .Empty(Empty), .CLK(CLK), .RST(RST));  
	memory_array ma (.Dout(Dout), .Din(Din), .CLK(CLK), .WE(WE), .WR_PTR(WR_PTR[7:0]), .RD_PTR(RD_PTR[7:0]));  
	status_signal ss (.Full(Full), .Empty(Empty), .WR_PTR(WR_PTR), .RD_PTR(RD_PTR));  
	
endmodule
