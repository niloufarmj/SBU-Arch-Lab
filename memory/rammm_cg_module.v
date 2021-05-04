`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:25:05 04/06/2021 
// Design Name: 
// Module Name:    rammm_cg_module 
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
module rammm_cg_module(
    input clka,
    input ena,
    input [0:0] wea,
    input [7:0] addra,
    input [7:0] dina,
    output [7:0] douta
    );

RAM_CG your_instance_name (
  .clka(clka), // input clka
  .ena(ena), // input ena
  .wea(wea), // input [0 : 0] wea
  .addra(addra), // input [7 : 0] addra
  .dina(dina), // input [7 : 0] dina
  .douta(douta) // output [7 : 0] douta
);

endmodule
