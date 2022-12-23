#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int a;//全局变量不初始化默认为0
//int main()
//{
//	a--;
//	if (a > sizeof(a)); //a与sizeof（a）比较时发生了类型转换 sizeof返回的无符号类型的数字
//	printf("dd");     //a作为-1被转换成了无符号的正数非常大；所以a>sizeof(a);
//	return 0;
//}
//求一个数二进制中1的个数
//int main()
//{ 
//	int a = 3;
//	scanf("%d", &a);
//	int count=0;
//	while (a)
//	{
//		if (a % 2 == 1)
//			count++;
//		a = a / 2;
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a;
//	int count=0;
//	scanf("%d", &a);
//	while (a)
//	{
//		if (a & 1 == 1)
//			count++;
//		a=a >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int cout(int n)
//{
//	if (n) //n不为0则还有1
//	{
//		n = n & (n - 1);//每执行一步减少一个1
//		return 1 + cout(n);
//	}
//	else//无1为0
//		return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", cout(a));
//	return 0;
//}
//求两个数二进制中不同位的个数
//int get(int a, int b)
//{
//	int cout=0;
//	int tmp = a ^ b;//异或后所得二进制数字相同为0不同为1
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);//统计二进制tmp中1的个数
//		cout++;
//	}
//	return cout;
//}
//int main()
//{
//	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	printf("%d", get(a, b));
//	return 0;
//}
//打印一个二进制数的奇数位和偶数位
//void print(int a)
//{
//	int i, j;
//	printf("奇数位为：\n");
//	for (i = 30; i >=0; i -= 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	putchar('\n');
//	printf("偶数位为：\n");
//	for (j = 31; j > 0; j -= 2)
//	{
//		printf("%d", (a >> j) & 1);
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//打印乘法口诀表
//void chengfa(int a)
//{
//	int i,j;
//	for (i = 1; i <=a; i++)
//	{
//		for (j = 1; j <=i ; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		putchar('\n');
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	chengfa(a);
//	return 0;
//}
//递归求n的阶乘
//int jie(int a)
//{
//	if (1 == a)
//		return 1;
//	else if (a > 1)
//		return a * jie(a - 1);
//	else
//	{
//		printf("输入的数不能求阶乘\n");
//		return 0;
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d的阶乘为%d", a, jie(a));
//	return 0;
//}
//字符串的逆序
//#include<string.h>
//void revers(char* p, int l)
//{
//	int a;
//	for (a = 0; p + a < p + l-1; a++, l--)
//	{
//		char temp;
//		temp = *(p + a);
//		*(p + a) = *(p + l - 1);
//		*(p + l - 1) = temp;
//
//	}
//}
//int main()
//{
//	char arr[] = "abcdefghigklmnopqrstuvwxyz";
//	int l = strlen(arr);
//	revers(arr,l);
//	printf("%s", arr);
//	return 0;
//}
//不使用库函数递归实现字符串的逆序
//int my_strlen(char arr[])
//{
//	int count=0, i;
//	for(i=0;arr[i]!='\0';i++)
//	{
//		count++;
//	}
//	return count;
//}
//void reverse(char* arr)//指针形式也能使用下标引用操作符，arr[i]表示*（arr+i）
//{
//	int right = my_strlen(arr)-1;
//	char temp = arr[0];
//	arr[0] = arr[right];//调换最外层的字符	
//	arr[right] = '\0';//得到一个arr+1开始的内层字符串
//	if (my_strlen(arr+1)>=2)//判断内层字符串是否需要调换
//	{
//		reverse(arr+1);//内层字符串的调换
//	}
//	arr[right] = temp;
//}
//int main()
//{
//	char arr[] = "abcdefghigklmnopqrstuvwxyz";
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}
//输入一个数字，用递归求出组成它的数字之和
//int Digitsum(int a)
//{
//	if (a < 10)
//		return a;
//	else if (a > 10)
//		return a % 10 + Digitsum(a / 10);
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("组成%d的数字之和为%d\n", a, Digitsum(a));
//	return 0;
//}
//递归求n的k次方
//double ci(int n, int k)
//{
//	if (0 == k)
//		return 1;
//	else if (k > 0)
//		return n * ci(n, k - 1);//考虑k>0的情况
//	else if (k < 0)
//		return 1.0 / ci(n, -k);//k小于0的情况转化成k大于0的情况
//}
//int main()
//{
//	int n,k;
//	scanf("%d%d", &n,&k);
//	printf("%d的%d次方是%lf", n, k, ci(n, k));
//	return 0;
//}
//寻找水仙花数
#include<math.h>
int main()
{
	int i;
	printf("1~10000的水仙花数有\n");
	for (i = 1; i <= 10000; i++)
	{
		int a = (int)pow(i % 10, 3);
		int b = (int)pow(i / 10 % 10, 3);
		int c = (int)pow(i / 100 % 10, 3);
		int d = (int)pow(i / 1000 % 10, 3);
		if (a + b + c + d == i)
			printf("%d ", i);
	}
	return 0;
}