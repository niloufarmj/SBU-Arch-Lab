`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:45:51 04/08/2021 
// Design Name: 
// Module Name:    FIFO_CG_MODULE 
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
module FIFO_CG_MODULE(
    input [7:0] Din,
    input RST,
    input RD_EN,
    input WR_EN,
    input CLK,
    output Empty,
    output Full,
    output [7:0] Dout
    );

FIFO_CG fifo (
  .clk(CLK), 
  .rst(RST), 
  .din(Din),
  .wr_en(WR_EN), 
  .rd_en(RD_EN),
  .dout(Dout),
  .full(Full),
  .empty(Empty)
);

endmodule
