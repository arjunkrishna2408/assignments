`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02.12.2022 15:09:07
// Design Name: 
// Module Name: moore_1011
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module moore_1011(i,clk,reset,o);
input i,clk,reset;
output reg o;
reg [2:0]PS,NS;
parameter s0=0, s1=1, s2=2, s3=3, s4=4;

always@(posedge clk or reset)
begin
    if(reset)
        PS <= s0;
    else
        PS <= NS;
end

always@(PS, i)
begin
    case(PS)
    s0: begin 
        o=1'b0; 
        NS = i? s1:s0; 
        end
    s1: begin 
        o=1'b0; 
        NS = i? s1:s2; 
        end
    s2: begin 
        o=1'b0; 
        NS = i? s3:s0; 
        end
    s3: begin 
        o=1'b0; 
        NS = i? s4 : s2; 
        end 
    s4: begin 
        o=1'b1; 
        NS = i? s1 : s2; 
        end
    endcase
end
endmodule
