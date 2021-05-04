`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:52:38 03/29/2021 
// Design Name: 
// Module Name:    status_signal 
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
module status_signal(
    input [8:0] WR_PTR,
    input [8:0] RD_PTR,
    output reg Full,
    output reg Empty
    );
	wire CMP;  
	wire EQ_PTR;  
	
	assign CMP = WR_PTR[8] ^ RD_PTR[8];  
	assign EQ_PTR = (WR_PTR[7:0] - RD_PTR[7:0]) ? 0 : 1;  
	
	always @(*)  
	begin  
		Full = CMP & EQ_PTR;  
		Empty = (~CMP) & EQ_PTR;  
	end  

endmodule
