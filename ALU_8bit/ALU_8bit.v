`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:51:52 06/15/2022 
// Design Name: 
// Module Name:    ALU_8bit 
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
module ALU_8bit(A,B,M,Cn,F,S
    );
	output reg[7:0] F;
	input [7:0] A,B;
	input [3:0] S;
	input Cn,M;
	always @(*)
	begin
		if(M == 1)
		begin
			case(S)
			4'd0: begin
			F = ~A;
			$display("NOT A A=%b S=%d F=%b",A,S,F);
			end
			4'd1: begin
			F = ~(A|B);
			$display("NOR A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd1: begin
			F = ~A & B;
			$display("(NOT A) AND B A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd3: begin
			F = 1'b0;
			$display("LOGIC 0 S=%d F=%b",S,F);
			end
			4'd4: begin
			F = ~(A&B);
			$display("NAND A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd5: begin
			F = A^B;
			$display("XOR A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd6: begin
			F = ~B;
			$display("NOT B A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd7: begin
			F = A&~B;
			$display("A AND (NOT B) A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd8: begin
			F = ~A|B;
			$display("(NOT A) or B : A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd9: begin
			F = ~(A^B);
			$display("XNOR A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd10: begin
			F = B;
			$display("B=%b S=%d F=%b",B,S,F);
			end
			4'd11: begin
			F = A&B;
			$display("AND A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd12: begin
			F = 1'b1;
			$display("LOGIC 1 S=%d F=%b",S,F);
			end
			4'd13: begin
			F = A|~B;
			$display("A OR (NOT B) A=%b S=%d F=%b",A,S,F);
			end
			4'd14: begin
			F = A|B;
			$display("OR A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd15: begin
			F = A;
			$display("A=%b S=%d F=%b",A,S,F);
			end
			endcase
		end
		else if ( M==0 && Cn==1 )
		begin
		case(S)
			4'd0: begin
			F = A;
			$display("A=%b S=%d F=%b",A,S,F);
			end
			4'd1: begin
			F = A + B;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd1: begin
			F = A + ~B;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd3: begin
			F = -1;
			$display("S=%d F=%b",S,F);
			end
			4'd4: begin
			F = A + A*~B;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd5: begin
			F = A-B-1;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd6: begin
			F = (A+B)+A*~B;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd7: begin
			F = A*~B-1;
			$display(" A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd8: begin
			F = A + A*B;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd9: begin
			F = A + B;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd10: begin
			F = (A+~B) + A*B;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd11: begin
			F = A*B-1;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd12: begin
			F = A+A;
			$display("A=%b S=%d F=%b",A,S,F);
			end
			4'd13: begin
			F = (A+B) + A;
			$display("A=%b  B=%b S=%d F=%b",A,B,S,F);
			end
			4'd14: begin
			F = (A+~B) + A;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd15: begin
			F = A-1;
			$display("A=%b S=%d F=%b",A,S,F);
			end
			endcase
		end
		else if(M==0 && Cn==0)
		begin
		case(S)
			4'd0: begin
			F = A+1;
			$display("A=%b S=%d F=%b",A,S,F);
			end
			4'd1: begin
			F = (A+B) + 1;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd1: begin
			F = (A+~B) + 1;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd3: begin
			F = 0;
			$display("S=%d F=%b",S,F);
			end
			4'd4: begin
			F = A + A*~B +1;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd5: begin
			F = (A+B) + A*~B + 1;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd6: begin
			F = A - B;
			$display("B A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd7: begin
			F = A*~B;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd8: begin
			F = A + A*B + 1;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd9: begin
			F = A + B +1;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd10: begin
			F = (A+~B) + A*B + 1;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd11: begin
			F = A*B;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd12: begin
			F = A+A+1;
			$display("A=%b S=%d F=%b",A,S,F);
			end
			4'd13: begin
			F = (A+B)+A+1;
			$display("A=%b S=%d F=%b",A,S,F);
			end
			4'd14: begin
			F = (A+~B)+A+1;
			$display("A=%b B=%b S=%d F=%b",A,B,S,F);
			end
			4'd15: begin
			F = A;
			$display("A=%b S=%d F=%b",A,S,F);
			end
			endcase
		end
	end
endmodule
