#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>
//fopoen fclose fputc fgetc ������ʹ��
//int main()
//{   //���ļ�
//	FILE* wr = fopen("test.txt", "w");
//	if (wr == NULL)
//		printf("%s", strerror(errno));
//	//д������
//	//��fputc ������ݵ��ļ��� fputc(Ҫ��������ݣ��ļ�ָ��(��)/��׼�����(��Ļstdin)))
//	fputc('b', wr);//һ��ֻ�����һ���ַ�
//	fputc('i', wr);
//	fputc('t', wr);
//	//�ر��ļ�
//	fclose(wr);
//	wr = NULL;
//	//���ļ�
//	FILE* re = fopen("test.txt", "r");
//	if(re==NULL)
//		printf("%s", strerror(errno));
//	//��������
//	//��fgetc ����(�ó�)������Ϊ����ֵ fgetc(�ļ�ָ��/��׼������(����stdout))
//	printf("%c",fgetc(re));//һ��ֻ������һ���ַ� ����ֵΪint��
//	printf("%c",fgetc(re));
//	printf("%c",fgetc(re));
//	//�ر��ļ�
//	fclose(re);
//	re = NULL;
//	return 0;
//}
//����(��ȡһ��)���� fgets    char* fgets(char* string,int n,FILE* stream)
//fgets(����������Ϣ����ȡ���ַ������飬Ҫ��ȡ���ַ��������ļ�ָ����)
//fgets����ֵΪ�����ȡ�ļ���Ϣ���ַ���ָ��

//int main()
//{
//	char arr[10] = { 0 };
//	//���ļ�
//	FILE* re = fopen("test.txt", "r");
//	if (re == NULL)
//		printf("%s", strerror(errno));
//	//��ȡ�ļ�
//	printf("%s", fgets(arr, 10, re));//ֻ��һ��
//	printf("%s", fgets(arr, 10, re));//ÿ��ֻ����һ�е����ݴ���������
//	//����ַ�������puts  int puts( const char *string );
//    //puts �������ַ����������Ļ��
//	puts(arr);//����ַ���arr����Ļ��
//	//�ر��ļ�
//	fclose(re);
//	re = NULL;
//	return 0;
//}
//���(һ��)fputs ���� int fputs( const char *string, FILE *stream )
//fputs(Ҫ��������ݣ������Ŀ����(�ļ�ָ��))
//int main()
//{
//	char arr[10] = { 0 };
//	//���ļ�
//	FILE* wr = fopen("test.txt", "w");
//	if (wr == NULL)
//		printf("%s", strerror(errno));
//	//д���ļ�
//	fputs("hello\n", wr);
//	fputs("lili\n", wr);
//	//�ر��ļ�
//	fclose(wr);
//	wr = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//	//�ӱ�׼��������ȡ��Ϣ
//	fgets(buf, 1024, stdin);
//	//�������׼�������
//	fputs(buf, stdout);
//	//�ȼ���
//	gets(buf);
//	puts(buf);
//	return 0;
//}
//��ʽ����ʽ�������fprintf int fprintf( FILE *stream, const char *format [, argument ]...);
//fprintf(�ļ�ָ�룬�����ʽ����Ӧ����)
//��ʽ����ʽ���뺯��fscanf fscanf( FILE *stream, const char *format [, argument ]... );
//fscanf(�ļ�ָ�룬�����ʽ���ļ�����ı�����ַ)

//struct S
//{
//	int a;
//	float b;
//	char c[5];
//};
//int main()
//{
//	struct S s1 = { 100,3.14,"hell" };
//	//���ļ�
//	FILE* wr = fopen("test.txt", "w");
//	if (wr == NULL)
//		printf("%s", strerror(errno));
//	//��ʽ������ʽ������ݵ��ļ�
//	fprintf(wr, "%d %f %s", s1.a, s1.b, s1.c);
//	//�ر��ļ�
//	fclose(wr);
//	wr = NULL;
//
//	FILE* re = fopen("test.txt", "r");
//	if (re == NULL)
//		printf("%s", strerror(errno));
//	//��ʽ������ʽ����(��ȡ)�ļ�����
//	fscanf(re, "%d %f %s", &(s1.a), &(s1.b), s1.c);
//	printf("%d %f %s", s1.a, s1.b, s1.c);
//	//�ر��ļ�
//	fclose(re);
//	re = NULL;
//	return 0;
//}
//struct S
//{
//	int a;
//	float b;
//	char c[5];
//};
//int main()
//{
//	struct S s1 = { 0 };
//	//�ӱ�׼�������л�ȡ��Ϣ
//	fscanf( stdin, "%d %f %s", &(s1.a), &(s1.b), s1.c);
//    //�ӱ�׼���������ʾ��Ϣ
//	fprintf(stdout, "%d %f %s", s1.a, s1.b, s1.c);
//	return 0;
//}
//���ַ����ж�ȡ��ʽ��������   sscanf����
//�Ѹ�ʽ��������������ַ���   sprintf����
//ʹ�ø�ʽ��fscanf fprintf��ͬ ���ò�ͬ
struct S
{
	int a;
	float b;
	char c[5];
};
int main()
{
	char arr[100] = { 0 };
	struct S s1 = { 100,3.14,"hell" };
	sprintf(arr, "%d %f %s", &(s1.a), &(s1.b), s1.c);//���ṹ������������ַ�������
	printf("%s\n", arr);
	sscanf(arr, "%d %f %s", s1.a, s1.b, s1.c);//���ַ����������뵽�ṹ����
	printf("%d %f %s\n", s1.a, s1.b, s1.c);
}
//�ܽ� scanf/printf����Ա�׼������/��׼����� ��ʽ������/��������
// fscanf/fprintf ���������������/����������� ��ʽ������/��������
//sscanf/spritnf ǰ���Ǵ��ַ�����(����)��ȡ��ʽ�������� �����ǰѸ�ʽ��������������ַ���
