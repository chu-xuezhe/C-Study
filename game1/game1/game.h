#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��������
void InitBoard(char board[COL][ROW], int row, int col);

void DisplayBoard(char board[COL][ROW], int row, int col);

void PlayerMove(char board[COL][ROW], int row, int col);

void ComputerMove(char board[COL][ROW], int row, int col);

//�ж���Ӯ
//���Ӯ����*��
//����Ӯ����#��
//ƽ�֣���Q��
//��������C��

char IsWin(char board[COL][ROW], int row, int col);