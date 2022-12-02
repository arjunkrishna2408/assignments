`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02.12.2022 11:13:28
// Design Name: 
// Module Name: mod_7_tb
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


module mod_7_tb();

reg clk, reset;
wire [2:0]q;

mod_7 c1(clk, reset, q);

initial
begin
clk = 0;
forever #10 clk = ~clk;
end

initial 
begin
reset = 1;
#50 reset = 0;
#50 reset = 1;
#50 reset = 0;
end

endmodule
