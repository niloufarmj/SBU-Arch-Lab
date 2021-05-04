`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:49:59 03/02/2021 
// Design Name: 
// Module Name:    ALU74181 
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
module ALU74181(
    input [3:0] A,
    input [3:0] B,
    input [3:0] S,
    input M,
    input C_n,
    output finalP,
    output finalG,
    output [3:0] F,
    output eq,
    output C_nplus4
    );
	 
	 wire [3:0] p, g;
	 cal_p_g calpg (A, B, S, p, g);
	 
	 wire [3:0] sigma;
	 cal_sigma calsigma (p, g, sigma);
	 
	 wire [3:0] C, Cnot, gnot, pnot;
	 wire Mnot;
	 not not1 (Mnot, M);
	 not_all not_all_g (g, gnot);
	 not_all not_all_p (p, pnot);
	 
	 and andc0 (Cnot[0], Mnot, C_n);
	 
	 wire tempc1_1, tempc1_2;
	 and and1 (tempc1_1, Mnot, pnot[0]);
	 and and2 (tempc1_2, Mnot, gnot[0], C_n);
	 or orc1 (Cnot[1], tempc1_1, tempc1_2);
	 
	 wire tempc2_1, tempc2_2, tempc2_3;
	 and and3 (tempc2_1, Mnot, pnot[1]);
	 and and4 (tempc2_2, Mnot, pnot[0], gnot[1]);
	 and and5 (tempc2_3, Mnot, gnot[0], gnot[1], C_n);
	 or orc2 (Cnot[2], tempc2_1, tempc2_2, tempc2_3);
	 
	 wire tempc3_1, tempc3_2, tempc3_3, tempc3_4;
	 and and6 (tempc3_1, Mnot, pnot[2]);
	 and and7 (tempc3_2, Mnot, pnot[1], gnot[2]);
	 and and8 (tempc3_3, Mnot, gnot[1], gnot[2], pnot[0]);
	 and and9 (tempc3_4, Mnot, gnot[0], gnot[1], gnot[2], C_n);
	 
	 or orc3 (Cnot[3], tempc3_1, tempc3_2, tempc3_3, tempc3_4);
	 
	 not_all notc (Cnot, C);
	 
	 xor_all xorAll (C, sigma, F);
	 
	 and andeq (eq, F[0], F[1], F[2], F[3]);
	 
	 wire finalGnot;
	 and andg (finalGnot, gnot[0], gnot[1], gnot[2], gnot[3]);
	 not notg (finalG, finalGnot);
	 
	 wire ptemp1, ptemp2, ptemp3;
	 and and10 (ptemp1, gnot[3], pnot[2]);
	 and and11 (ptemp2, gnot[3], gnot[2], pnot[1]);
	 and and12 (ptemp3, gnot[3], gnot[2], gnot[1], pnot[0]);
	 wire finalPnot;
	 or orp (finalPnot, pnot[3], ptemp1, ptemp2, ptemp3);
	 not notp (finalP, finalPnot);
	 
	 wire tempcn;
	 and and13 (tempcn, gnot[3], gnot[2], gnot[1], gnot[0], C_n);
	 or orcn (C_nplus4, finalPnot, tempcn);
	
endmodule
