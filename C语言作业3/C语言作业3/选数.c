#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	static int sum = 0;
	int x = 1;
	int i = 1;
	int a, b, c;
	printf("1000000���ܼ�����ȫƽ������������ȫ��������������:\n");
	while (i<= 1000)
	{
		a = i * i;
		while (x <= 100)
		{
			b = x * x*x;
			if (a == b)
			{
				printf("%d\n", b);
				sum = sum + 1;
			    break;
			}
				x++;
		}
		i++;
		x = 1;
	}

	printf("һ��%d��\n",sum);
	return 0;
}