#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x, int y)//1.�Զ��庯��--�Լ�����ĺ���
//{                    //2.�⺯��---c���Ա����ṩ�ĺ���
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int sum = Add(a, b);//�����������
//	printf("%d", sum);
//	return 0;
//}
//���ܽ�,C���Գ��õĺ�������:
//1.IO����
//2.�ַ�����������
//3.�ַ���������
//4.�ڴ��������
//5.ʱ��/���ڲ�������
//6.��ѧ����
//7.�����⺯��
#include<string.h>
//int main()
//{//1.strlen --string length ���ַ�������
// //strcpy --string copy  �����ַ���
//	char arr1[] = { "bit" };//�����\0Ϊ�ַ��������ı�־
//	char arr2[20] = { "#######" };
//	strcpy(arr2, arr1);//���ַ���arr1������arr2�У�\0Ҳ������arr2��������ֻ��bit  Ϊbit\0######
//	printf("%s", arr2);//�ַ�������Ϊchar ��ӡΪ%s
//	return 0;
//}
//2.memset--�ڴ����� memory �ڴ� --  set����
//int main()
//{
//	char arr[] = "Hello world";//�ַ������ַ�����ɵ�
//	memset(arr, '*', 5);//memset(ָ�����͵ı���;������;��ȡ��ַ�ĵں��ڴ��ֽ����ж��ٸ��ڴ��ֽڱ�����)
//	printf("%s\n", arr);//��������'*'�����arr�����д�ŵ�ǰ5���ַ�
//	return 0;
//}
//�Զ��庯��
//ret_type fun_name(paral *)//�������� ������ ������������
//{
//
//	statement;//����,������
//}
//1.ѡ���������ϴ�ֵ�ĺ���
//int getmax(int x, int y)//�����Ķ���
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 49;
//	int b = 99;
//	int max = getmax(a,b);//�����ĵ��� 
//	printf("max=%d\n", max);
//
//	return 0;
//}
//2.��������
//����ʾ��
//void swap(int x, int y)//�����ִ�����xy����������a��b��ֵ�ֱ𸳸���xy
//{               
//	int temp;         //�����ʵ������Ϊx��y������������ab�޹�
//	temp = x;          //�β�ʵ�ʻ��൱���β���ʵ�ε�һ����ʱ����
//	x = y;
//	y = temp;
//}
//int main()
//{
//	int a = 45;
//	int b = 89;
//	swap(a, b);//��ֵ����
//	printf("a =%d,b=%d", a, b);
//
//	return 0;
//}
//��ȷʾ��
//void swap2(int* pa, int* pb)//������ָ�����������ab�ĵ�ַ
//{
//	int temp;//����һ����ʱָ����������н�����ֵ
//	temp = *pa;//�ñ���temp�����a��ֵ *pa�͵���a
//	*pa = *pb;//ͨ��b�ĵ�ַ���ҵ�b��ʹb��ֵ����a �ȼ���a =b
//	*pb = temp;//ͬ��
//
//}
//int main()
//{
//	int a = 45;
//	int b = 89;
//	swap2(&a,&b);//��������ab�ĵ�ַ��ʵ��ab���Ľ��� ����ַ����
//	printf("a =%d,b=%d", a, b);
//
//	return 0;
//}
//int getmax(int x, int y)//x,yΪ��ʽ����--�����ж���Ĳ�������ʽ����ֻ���ں�����������
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 49;
//	int b = 99;
//	int max = getmax(a, b);//a,b Ϊʵ�ʲ���--��������������֣�ʵ�ʲ�����Ϊ���������������ʽ�������ȱ�����ȷ����ֵ
//	printf("max=%d\n", max);
//
//	return 0;
//}
//дһ�������ж�һ�����ǲ�������
#include<math.h>
//int is_prime(int n)//ʵ��a�����β�n
//{
//	int i;
//	for (i = 2; i <= sqrt(n); i++)//forѭ����֤��a�Ƿ�ֻ�ܱ�1����������������
//	{
//		if (n%i == 0)
//			break;//�ܱ�������������������ѭ��
//	}
//	if (sqrt(n) < i)//�ж����������Ƿ񱻱����������
//		return 1;//���ﲻ����࣬�������޸�
//	else
//		return 0;
//}
//int is_prime(int n)
//{
//	int i;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;//retuen 0;��break��ǿ��ֱ�ӽ������������ں����ڲ�����λ��ʹ�ã���break;�ǽ���ѭ��
//	}
//	return 1;//�ܵ������ֻ��һ����������ܱ�2~sqrt(n)��������������������
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (is_prime(a) == 1)//�����е��ô�ֵ������������a�Ƿ�Ϊ����
//		printf("%d������\n", a);
//	else
//		printf("%d��������\n", a);
//	return 0;
//}
//дһ�������ж�һ���ǲ�������
//int is_leap_year(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))//�ж��Ƿ�Ϊ����
//		return 1;
//	else
//		return 0;
//
//}
//int main()
//{
//	int year;
//	for (year = 1000; year < 3000; year++)//��1000~3000�ڵ�����
//	{
//		if (1 == is_leap_year(year))//��ֵ��������
//			printf("%d ", year);
//	}
//
//	return 0;
//}
//дһ�����������Ʋ���������Ԫ��
//����ʾ��
//int bunary_search(int arr[], int k)//�����int arr[]Ϊָ�����arr��һ��Ԫ�ص�ַ����Ϊ4��
//{                                 //��Ϊһ������̫���ˣ��������Ը���ڿ��ٿռ���������ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);//������ָ�����ʽ���ҵ�ԭ������в���
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;//���м�Ԫ��
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;//û��Ŀ��Ԫ��
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����������ָ��
//	int k = 7;
//	int ret =bunary_search(arr, k);//�����Ʋ���Ԫ��//��arr����ʱ��ʵ���ϴ�����arr�е�һ��Ԫ�صĵ�ַ
//	if (-1 == ret)
//		printf("�Ҳ���������Ԫ��\n");
//	else
//		printf("�ҵ��ˣ�Ԫ���±�Ϊ%d\n", ret);
//	return 0;
//}
//int bunary_search(int arr[], int k,int sz)//�����һ���β�sz������������Ԫ�ظ���
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//����ѡ���ں�������������Ԫ�ظ���
//	int k = 7;
//	int ret = bunary_search(arr, k,sz);//����ʵ��
//	if (-1 == ret)
//		printf("�Ҳ���������Ԫ��\n");
//	else
//		printf("�ҵ��ˣ�Ԫ���±�Ϊ%d\n", ret);
//	return 0;
//}
//дһ������ÿ����һ�Σ�num+1
//void Add(int* p)
//{
//	(*p)++;//����*p++����Ϊ++���������ȼ�����*�����õ����ȼ�
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);//��ַ����
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//	
//	return 0;
//}
//������Ƕ�׵��ú���ʽ����
//1.Ƕ�׵��þ��Ǻ�����������
//2.��ʽ����
//һ������������һ�������ķ���ֵ
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", sizeof("abc"));//sizeof�ķ���ֵΪ���ͣ����������ʽ����
//	printf("%d\n", strlen("abc"));//strlen���ַ������Ȳ���\n,sizeof���ַ���������\n�ַ�����һ���ַ�Ϊһ���ֽ�,\nҲΪһ���ֽ�
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//��ʽ����  ��ӡ��Ϊ4321
//	return 0;//���ͣ�printf()�����ķ���ֵΪ��ӡ���ַ��������������������ӡ
//}
//int Add(int, int);//����������
//int main()
//{
//	int a = 34;
//	int b = 98;
//	int sum = Add(a, b);//�����ĵ���
//	printf("%d\n", sum);
//	return 0;
//}
//int Add(int x, int y)//�����Ķ���
//{
//	int z;
//	z = x + y;
//	return z;
//}
//�����������������壬�������õľ���ʹ�ã�---�ŵ�����ļ���ȥ--�������õ�ģ�黯
//1.���������ŵ�ͷ�ļ���ȥ��ʹ��ʱ������ͷ�ļ���
//2.����������Էŵ���һ��Դ�ļ���ȥ���������庯��
//3.�����ĵ�������Դ�ļ���ʹ��
#include"Add.h"//�����Լ���ͷ�ļ�ʱ��""����
int main()
{
	int a = 34;
	int b = 98;
	int sum = Add(a, b);//ֱ��ʵ�ֺ����ĵ���
	printf("%d\n", sum);
	return 0;
}
