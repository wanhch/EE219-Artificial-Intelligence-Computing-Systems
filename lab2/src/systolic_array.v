`timescale 1ns / 1ps

module systolic_array#(
    parameter M = 5,
    parameter N = 3,
    parameter K = 4,
    parameter DATA_WIDTH = 32
) (
    input clk,
    input rst,
    input [DATA_WIDTH*N-1:0] X,
    input [DATA_WIDTH*N*K-1:0] W,
    output reg [DATA_WIDTH*K-1:0] Y,
    output valid,
    output done
);
  localparam COUNTER_WIDTH = $clog2(M+N+K)+1;

  wire [DATA_WIDTH-1:0]       x0 [N-1:0];
  wire [DATA_WIDTH*(K+1)-1:0] xx [N-1:0];
  wire [DATA_WIDTH*(N+1)-1:0] yy [K-1:0];

  reg [DATA_WIDTH-1:0]  x_shift_reg [N-1:0][N-1:0];
  reg [DATA_WIDTH-1:0]  y_shift_reg [K-1:0][K-1:0];
  reg [COUNTER_WIDTH:0] counter;

  integer i0, j0;
  genvar i, j;

  for (i = 0; i < N; i = i + 1) 
  begin: xx_assign
    assign x0[i] = X[DATA_WIDTH*(i+1)-1:DATA_WIDTH*i];
    assign xx[i][DATA_WIDTH-1:0] = x_shift_reg[i][i];
  end

  for (i = 0; i < K; i = i + 1) 
  begin: yy_assign
    assign y_shift_reg[i][0] = yy[i][DATA_WIDTH*(N+1)-1:DATA_WIDTH*N];
    assign Y[DATA_WIDTH*(i+1)-1:DATA_WIDTH*i] = y_shift_reg[i][K-i-1];
    assign yy[i][DATA_WIDTH-1:0] = 0;
  end

  generate
    for (i = 0; i < N; i = i + 1) 
    begin: pe_row 
      for (j = 0; j < K; j = j + 1)
      begin: pe_col 
        pe #(DATA_WIDTH) pe (clk, rst, W[DATA_WIDTH*(j*N+i+1)-1:DATA_WIDTH*(j*N+i)], xx[i][DATA_WIDTH*(j+1)-1:DATA_WIDTH*j], yy[j][DATA_WIDTH*(i+1)-1:DATA_WIDTH*i], xx[i][DATA_WIDTH*(j+2)-1:DATA_WIDTH*(j+1)], yy[j][DATA_WIDTH*(i+2)-1:DATA_WIDTH*(i+1)]);
      end
    end
  endgenerate

  always @(posedge clk or posedge rst) begin
    for (i0 = 0; i0 < N; i0 = i0 + 1)
    begin
      for (j0 = 0; j0 < i0; j0 = j0 + 1)
      begin
        x_shift_reg[i0][j0+1] <= x_shift_reg[i0][j0];
      end
    end
    for (i0 = 0; i0 < K; i0 = i0 + 1)
    begin
      for (j0 = 0; j0 < K-i0-1; j0 = j0 + 1)
      begin
        y_shift_reg[i0][j0+1] <= y_shift_reg[i0][j0];
      end
    end

    if(rst) begin
      for (i0 = 0; i0 < N; i0 = i0 + 1)
      begin
        x_shift_reg[i0][0] <= 0;
      end
      counter <= 0;
      valid   <= 1'b0;
      done    <= 1'b0;
    end else begin
      if (counter*1 == M+N+K) begin
        done <= 1'b1;
      end else begin
        counter <= counter + 1;
      end
      if (counter*1 >= N+K) begin
        valid <= 1'b1;
      end else begin
        valid <= 1'b0;
      end
      for (i0 = 0; i0 < N; i0 = i0 + 1)
      begin
        x_shift_reg[i0][0] <= x0[i0];
      end
    end
  end
endmodule