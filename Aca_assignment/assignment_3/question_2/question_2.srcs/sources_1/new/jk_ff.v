`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02.12.2022 10:27:59
// Design Name: 
// Module Name: jk_ff
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


module jk_ff(clk, j, k, q, qbar, reset);

input clk, j, k, reset;
output reg q, qbar;

always@(negedge clk, reset)
begin
if(reset == 1) begin q <= 0; qbar <= 1; end
else
  case({j,k})
    2'b00: begin q<=q; qbar<=qbar; end
    2'b01: begin q<=0; qbar<=1; end
    2'b10: begin q<=1; qbar<=0; end
    2'b11: begin q<=~q; qbar<=~qbar; end
  endcase
end

endmodule
