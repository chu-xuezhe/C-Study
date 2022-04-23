#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//函数声明
void InitBoard(char board[COL][ROW], int row, int col);

void DisplayBoard(char board[COL][ROW], int row, int col);

void PlayerMove(char board[COL][ROW], int row, int col);

void ComputerMove(char board[COL][ROW], int row, int col);

//判断输赢
//玩家赢：‘*’
//电脑赢：‘#’
//平局：‘Q’
//继续：‘C’

char IsWin(char board[COL][ROW], int row, int col);