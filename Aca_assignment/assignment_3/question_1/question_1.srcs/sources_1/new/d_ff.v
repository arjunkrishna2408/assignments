`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02.12.2022 09:00:28
// Design Name: 
// Module Name: d_ff
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


module d_ff(d,clk,reset,q,qbar); 
input d, clk, reset; 
output reg q, qbar; 
always@(posedge clk,reset) 
begin
if(reset == 1) begin q <= 0; qbar <= 1; end
else 
begin q <= d; qbar = !d; end
end 
endmodule
