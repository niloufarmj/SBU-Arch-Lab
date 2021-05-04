`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:15:19 04/06/2021 
// Design Name: 
// Module Name:    ram_cg_module 
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
module RAM_CG_MODULE(
    input [7:0] Din,
    input [7:0] Addr,
    input RST,
    input EN,
    input WE,
    input CLK,
    output [7:0] Dout
    );

RAM_CG ram (
  .clka(CLK), 
  .addra(Addr),
  .rsta(RST),
  .dina(Din), 
  .wea(WE),
  .ena(EN),
  .douta(Dout)
);

endmodule
