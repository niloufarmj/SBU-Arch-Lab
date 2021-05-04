`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:39:53 03/29/2021 
// Design Name: 
// Module Name:    read_pointer 
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
module read_pointer(
    input RD_EN,
    input Empty,
    input CLK,
    input RST,
    output reg [8:0] RD_PTR
    );  
	
	
	always @(posedge CLK or negedge RST)  
	begin  
		if(~RST) 
			RD_PTR <= 9'b000000000;  
		else if((~Empty)& RD_EN)  
			RD_PTR <= RD_PTR + 9'b000000001;  
		else  
			RD_PTR <= RD_PTR;  
	end  

endmodule
