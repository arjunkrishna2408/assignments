`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02.12.2022 10:13:52
// Design Name: 
// Module Name: d_ff_tb
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


module d_ff_tb();
reg d, clk, reset; 
wire q, qbar;

d_ff ff1(d,clk,reset,q,qbar);

initial begin
  clk=0; 
  forever #10 clk = ~clk;  
end 
initial begin 
 reset = 1; d <= 0;
 #100; reset=0; d <= 1;
 #50; reset = 1;
 #100; reset = 0; d <= 0;
 #100; d <= 1;
end 
endmodule
