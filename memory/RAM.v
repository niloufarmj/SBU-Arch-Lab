`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:39:25 04/02/2021 
// Design Name: 
// Module Name:    RAM 
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
module RAM(
    input [7:0] Din,
    input [7:0] Addr,
    input RST,
    input EN,
    input WE,
    input CLK,
    output [7:0] Dout
    );
	reg [7:0] ram [255:0];   
	reg [7:0] read_a; 
	reg [7:0] out;
		always @(posedge CLK) begin 
			if (RST)
			begin
				assign out = 8'b0;
			end
			else
			begin
				if (EN) 
				begin 
					if (WE)   
						ram[Addr] <= Din;   
						read_a <= Addr;
					end	
				end	
				assign out = ram[read_a];		
			end
			assign Dout = out;

endmodule
