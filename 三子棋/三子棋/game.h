#define _CRT_SECURE_NO_WARNINGS 1
#include<windows.h>//����ͷ�ļ��ļ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3//���ж���
#define COL 3
void InitBoard(char Board[ROW][COL], int row, int col);//��������
void DisplayBoard(char Board[ROW][COL], int row, int col);
void Playmove(char Board[ROW][COL], int row, int col);
void Computermove(char Board[ROW][COL], int row, int col);
char Is_end(char Board[ROW][COL], int row, int col);