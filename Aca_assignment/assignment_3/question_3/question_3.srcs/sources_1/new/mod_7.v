`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02.12.2022 11:06:11
// Design Name: 
// Module Name: mod_7
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


module mod_7(clk, reset, q);

input clk, reset;
output reg [2:0]q;

always@(posedge clk, reset)
begin
if(reset == 1) q <=3'd0;
else
    case(q)
    3'd0: q<=3'd1;
    3'd1: q<=3'd2;
    3'd2: q<=3'd3;
    3'd3: q<=3'd4;
    3'd4: q<=3'd5;
    3'd5: q<=3'd6;
    3'd6: q<=3'd7;
    3'd7: q<=3'd0;
    endcase
end
endmodule
