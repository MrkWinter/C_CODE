#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float x = 3.14;
int main()
{   float r,h,c,s,v,S,V;
	printf("������Բ�İ뾶Ϊ:");
	scanf("%f", &r);
	printf("������Բ���ĸ�Ϊ:");
	scanf("%f", &h);
	c = 2 * x * r;
	printf("Բ���ܳ�Ϊ:%.2f\n", c);
	s = x * r*r;
	printf("Բ�����Ϊ:%.2f\n",s);
	v = s * h;
	printf("Բ�������Ϊ:%.2f\n", v);
	S = 4 * x * r*r;
	printf("��rΪ�뾶����ı����Ϊ:%.2f\n", S);
	V = x * r*r*r * 4 / 3;
	printf("��rΪ�뾶��������Ϊ:%.2f\n", V);
	return 0;
}