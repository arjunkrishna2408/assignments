`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02.12.2022 10:41:47
// Design Name: 
// Module Name: jk_ff_tb
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


module jk_ff_tb();

reg clk, j, k, reset;
wire q, qbar;

jk_ff ff1(clk, j, k, q, qbar, reset);

initial begin
  clk=0;
     forever #10 clk = ~clk;  
end 
initial begin 
 j = 0; k = 0; reset = 1;
 #50; reset = 0;
 #100; j = 1; k = 0;
 #50; reset = 1;  
 #50; reset = 0;  
 #100; j = 0; k = 1; 
 #100; j = 1; k = 0; 
 #100; j = 1; k = 1; 
end 

endmodule
