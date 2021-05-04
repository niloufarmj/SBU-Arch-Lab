`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:59:35 04/08/2021 
// Design Name: 
// Module Name:    RAM_MODULE_CG 
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
module RAM_MODULE_CG(
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
  .ena(EN), 
  .wea(WE), 
  .addra(Addr), 
  .dina(Din), 
  .douta(Dout) ,
  .rsta(RST)
);

endmodule
