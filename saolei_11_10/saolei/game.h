#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define ROWS 11
#define COLS 11

#define ROW 9
#define COL 9

void init_board(char board[ROWS][COLS], int rows, int cols, char sets);

void display_board(char board[ROWS][COLS], int row, int col);

void set_lei(char mine[ROWS][COLS],int row,int col);

void find_lei(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);