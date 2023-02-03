`timescale 1ns / 1ps
module im2col #(
    parameter IMG_W       = 8,
    parameter IMG_H       = 8,
    parameter DATA_WIDTH  = 8,
    parameter ADDR_WIDTH  = 32,
    parameter FILTER_SIZE = 3,
    parameter IMG_BASE    = 16'h0000,
    parameter IM2COL_BASE = 16'h2000
) (
    input clk,
    input rst,
    input  [DATA_WIDTH-1:0] data_rd,
    output [DATA_WIDTH-1:0] data_wr,
    output [ADDR_WIDTH-1:0] addr_wr,
    output [ADDR_WIDTH-1:0] addr_rd,
    output reg done,
    output reg mem_wr_en
);
  localparam IMG_H_WIDTH   = (IMG_H == 1 ? 1:$clog2(IMG_H));
  localparam IMG_W_WIDTH   = (IMG_W == 1 ? 1:$clog2(IMG_W));
  localparam IMG_WIDTH     = ((IMG_W * IMG_H) == 1 ? 1:$clog2(IMG_W * IMG_H));
  localparam FILTER_WIDTH  = $clog2(FILTER_SIZE)+1;
  localparam FILTER2_WIDTH = $clog2(FILTER_SIZE * FILTER_SIZE)+1;
  localparam FILTER_MID    = (FILTER_SIZE - 1) / 2;
  
  reg [DATA_WIDTH-1:0]    img [IMG_H-1:0][IMG_W-1:0];
  reg [ADDR_WIDTH-1:0]    rd_addr;
  reg [ADDR_WIDTH-1:0]    wt_addr;
  reg [IMG_WIDTH-1:0]     pixel_cnt;
  reg [FILTER2_WIDTH-1:0] kernel_cnt;
  reg [DATA_WIDTH-1:0]    data;
  reg [1:0]               mode;

  wire [IMG_H_WIDTH-1:0]  pixel_row;
  wire [IMG_W_WIDTH-1:0]  pixel_col;
  wire [FILTER_WIDTH-1:0] kernel_row;
  wire [FILTER_WIDTH-1:0] kernel_col;

  wire [IMG_WIDTH-1:0]     _pixel_row;
  wire [IMG_WIDTH-1:0]     _pixel_col;
  wire [FILTER2_WIDTH-1:0] _kernel_row;
  wire [FILTER2_WIDTH-1:0] _kernel_col;
  assign _pixel_row  = (pixel_cnt / IMG_W);
  assign pixel_row   = _pixel_row[IMG_H_WIDTH-1:0];
  assign _pixel_col  = pixel_cnt % IMG_W;
  assign pixel_col   = _pixel_col[IMG_W_WIDTH-1:0];
  assign _kernel_row = kernel_cnt / FILTER_SIZE;
  assign kernel_row  = _kernel_row[FILTER_WIDTH-1:0];
  assign _kernel_col = kernel_cnt % FILTER_SIZE;
  assign kernel_col  = _kernel_col[FILTER_WIDTH-1:0];

  assign data_wr = data;
  assign addr_wr = wt_addr;
  assign addr_rd = rd_addr;

  always @(posedge clk or posedge rst) begin
    if(rst) begin
      done       <= 1'b0;
      mem_wr_en  <= 1'b0;
      mode       <= 2'b0;
      rd_addr    <= IMG_BASE;
      wt_addr    <= IM2COL_BASE - 1;
      pixel_cnt  <= 0;
      kernel_cnt <= 0;
    end else begin
      if (mode == 2'b0) begin
        rd_addr <= IMG_BASE + pixel_cnt *1 + 1;
        mode    <= 2'b1;
      end else if (mode == 2'b1) begin
        pixel_cnt <= pixel_cnt + 1;
        rd_addr   <= IMG_BASE + pixel_cnt *1 + 2;
        img[pixel_row][pixel_col] <= data_rd;
        mode <= 2'b10;
      end else if (mode == 2'b10) begin
        if (pixel_cnt < IMG_W*IMG_H) begin
          rd_addr <= IMG_BASE + pixel_cnt *1 + 2;
          img[pixel_row][pixel_col] <= data_rd;
          pixel_cnt <= pixel_cnt + 1;
        end else begin
          pixel_cnt <= 0;
          mode      <= 2'b11;
        end
      end else if (mode == 2'b11) begin
        if (pixel_cnt < IMG_W*IMG_H) begin
          mem_wr_en <= 1'b1;
          wt_addr   <= wt_addr + 1;
          if (kernel_cnt < FILTER_SIZE*FILTER_SIZE-1) begin
            kernel_cnt <= kernel_cnt + 1;
          end else begin
            kernel_cnt <= 0;
            pixel_cnt  <= pixel_cnt + 1;
          end
          if (FILTER_MID <= pixel_row*1 + kernel_row*1 && pixel_row*1 + kernel_row*1 < IMG_H + FILTER_MID && FILTER_MID <= pixel_col*1 + kernel_col*1 && pixel_col*1 + kernel_col*1 < IMG_W + FILTER_MID) begin
            data <= img[kernel_row + pixel_row*1 - FILTER_MID][kernel_col + pixel_col*1 - FILTER_MID];
          end else begin
            data <= 0;
          end
        end else begin
          mem_wr_en <= 1'b0;
          done      <= 1'b1;
        end
      end
    end
  end
endmodule