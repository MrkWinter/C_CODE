#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int a;//ȫ�ֱ�������ʼ��Ĭ��Ϊ0
//int main()
//{
//	a--;
//	if (a > sizeof(a)); //a��sizeof��a���Ƚ�ʱ����������ת�� sizeof���ص��޷������͵�����
//	printf("dd");     //a��Ϊ-1��ת�������޷��ŵ������ǳ�������a>sizeof(a);
//	return 0;
//}
//��һ������������1�ĸ���
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
//	if (n) //n��Ϊ0����1
//	{
//		n = n & (n - 1);//ÿִ��һ������һ��1
//		return 1 + cout(n);
//	}
//	else//��1Ϊ0
//		return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", cout(a));
//	return 0;
//}
//���������������в�ͬλ�ĸ���
//int get(int a, int b)
//{
//	int cout=0;
//	int tmp = a ^ b;//�������ö�����������ͬΪ0��ͬΪ1
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);//ͳ�ƶ�����tmp��1�ĸ���
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
//��ӡһ����������������λ��ż��λ
//void print(int a)
//{
//	int i, j;
//	printf("����λΪ��\n");
//	for (i = 30; i >=0; i -= 2)
//	{
//		printf("%d", (a >> i) & 1);
//	}
//	putchar('\n');
//	printf("ż��λΪ��\n");
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
//��ӡ�˷��ھ���
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
//�ݹ���n�Ľ׳�
//int jie(int a)
//{
//	if (1 == a)
//		return 1;
//	else if (a > 1)
//		return a * jie(a - 1);
//	else
//	{
//		printf("�������������׳�\n");
//		return 0;
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d�Ľ׳�Ϊ%d", a, jie(a));
//	return 0;
//}
//�ַ���������
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
//��ʹ�ÿ⺯���ݹ�ʵ���ַ���������
//int my_strlen(char arr[])
//{
//	int count=0, i;
//	for(i=0;arr[i]!='\0';i++)
//	{
//		count++;
//	}
//	return count;
//}
//void reverse(char* arr)//ָ����ʽҲ��ʹ���±����ò�������arr[i]��ʾ*��arr+i��
//{
//	int right = my_strlen(arr)-1;
//	char temp = arr[0];
//	arr[0] = arr[right];//�����������ַ�	
//	arr[right] = '\0';//�õ�һ��arr+1��ʼ���ڲ��ַ���
//	if (my_strlen(arr+1)>=2)//�ж��ڲ��ַ����Ƿ���Ҫ����
//	{
//		reverse(arr+1);//�ڲ��ַ����ĵ���
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
//����һ�����֣��õݹ���������������֮��
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
//	printf("���%d������֮��Ϊ%d\n", a, Digitsum(a));
//	return 0;
//}
//�ݹ���n��k�η�
//double ci(int n, int k)
//{
//	if (0 == k)
//		return 1;
//	else if (k > 0)
//		return n * ci(n, k - 1);//����k>0�����
//	else if (k < 0)
//		return 1.0 / ci(n, -k);//kС��0�����ת����k����0�����
//}
//int main()
//{
//	int n,k;
//	scanf("%d%d", &n,&k);
//	printf("%d��%d�η���%lf", n, k, ci(n, k));
//	return 0;
//}
//Ѱ��ˮ�ɻ���
#include<math.h>
int main()
{
	int i;
	printf("1~10000��ˮ�ɻ�����\n");
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