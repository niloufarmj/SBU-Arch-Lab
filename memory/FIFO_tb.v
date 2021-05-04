`timescale 1ns / 1ps

 `define          DELAY 3  
 
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:05:08 04/02/2021
// Design Name:   FIFO
// Module Name:   D:/uni/arch lab projects/memory/FIFO_tb.v
// Project Name:  memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FIFO
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FIFO_tb;

	// Inputs
	reg [7:0] Din;
	reg RST;
	reg RD_EN;
	reg WR_EN;
	reg clk;

	// Outputs
	wire Empty;
	wire Full;
	wire [7:0] Dout;

	// Instantiate the Unit Under Test (UUT)
	FIFO uut (
		.Din(Din), 
		.RST(RST), 
		.RD_EN(RD_EN), 
		.WR_EN(WR_EN), 
		.CLK(clk), 
		.Empty(Empty), 
		.Full(Full), 
		.Dout(Dout)
	);

	integer i;  
	
initial  
      begin  
           clk    	= 1'b0;  
           RST     	= 1'b0;  
           WR_EN     = 1'b0;  
           RD_EN		= 1'b0;  
           Din     	= 8'd0;  
      end  

  initial  
      begin  
           main;  
      end  
 task main;  
      fork  
           clock_generator;  
           reset_generator;  
           operation_process;  
      join  
 endtask  
 task clock_generator;  
      begin  
           forever #`DELAY clk = !clk;  
      end  
 endtask  
 task reset_generator;  
      begin  
           #(`DELAY*2)  
           RST = 1'b1;  
           # 10  
           RST = 1'b0;  
           # 10  
           RST = 1'b1;  
      end  
 endtask  
 task operation_process;  
      begin  
					#(`DELAY*5)  
                WR_EN = 1'b1;  
                 Din  = 8'd0;
                #(`DELAY*2)  
                WR_EN = 1'b0;
					 
           for (i = 0; i < 256; i = i + 1) begin: WRE  
                #(`DELAY*5)  
                WR_EN = 1'b1;  
                 Din =  Din + 8'd1;  
                #(`DELAY*2)  
                WR_EN = 1'b0;  
           end  
           #(`DELAY)  
			  
           for (i = 0; i < 256; i = i + 1) begin: RDE  
                #(`DELAY*5)  
                RD_EN = 1'b1;  
                #(`DELAY*2)  
                RD_EN = 1'b0;  
           end  
      end  
 endtask  



endmodule

