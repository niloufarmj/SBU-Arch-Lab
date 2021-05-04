`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:46:21 03/29/2021 
// Design Name: 
// Module Name:    write_pointer 
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
module write_pointer(
    input WR_EN,
    input Full,
    input CLK,
    input RST,
    output reg[8:0] WR_PTR,
    output WE
    );

	assign WE = (~Full) & WR_EN;  
	
	always @(posedge CLK or negedge RST)  
	begin  
		if(~RST) 
			WR_PTR <= 9'b000000000;  
		else if(WE)  
			WR_PTR <= WR_PTR + 9'b000000001;  
		else  
			WR_PTR <= WR_PTR;  
  end  
  
endmodule
