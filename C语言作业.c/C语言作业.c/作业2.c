#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int sequence1(int x, int y, int z)
{
	int biggest, d, e;
	if (x > y) d = x;
	else x = d = y;
	if (x > z) e = x;
	else(e = z);
	if (d > e) biggest = d;
	else biggest = e;
	return biggest;
}
int sequence2(int x, int y, int z)
{
	int medium, d, e;
	if (x > y) d = x;
	else  d = y;
	if (x > z) e = x;
	else  e = z;
	if (d > e) medium = e;
	if ((d == e)&&(z > y)) medium = z;
	if ((d == e)&&(z < y)) medium = y;
	if (d < e) medium = d;
	return medium;
}
int sequence3(int x, int y, int z)
{
	int minium, d, e;
	if (x > y) d = y;
	else d = x;
	if (x > z) e = z;
	else e = x;
	if (d > e) minium = e;
	else minium = d;
	return minium;
}
int main()
{
	int sequence1(int x, int y, int z);
	int sequence2(int x, int y, int z);
	int sequence3(int x, int y, int z);
	int a, b, c, A, B, C;
	printf("������������:");
	scanf("%d%d%d", &a, &b, &c);
	A = sequence1(a, b, c);
	B = sequence2(a, b, c);
	C = sequence3(a, b, c);
	printf("�����������ֵ=%d\n",A);
	printf("���������е�ֵ=%d\n",B);
	printf("����������Сֵ=%d\n",C);

    return 0;
}