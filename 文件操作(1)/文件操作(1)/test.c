#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//�ļ����ͷ�Ϊ�ı��ļ��Ͷ������ļ�

//�ı��ļ��洢����8λ�����Ƶ�ASCII��ֵ Ҳ����˵���ı�����ʱ����ÿ8λ��ȡ���ݣ�Ȼ��չʾ���������assic��������Ĳ������ַ��ļ�����ֱ�ӹۿ�
//�������ļ�����ֱ�Ӷ����Ƶ���ʽ�洢���ļ����򿪺��޷��ۿ�
//�ı��ļ��洢�����ַ�
//�������ļ��洢���Ƕ���������
//�ļ������� ���������  ���뻺����
//�����ڴ��Ӳ�̼�

//���ļ����� fopen
//FILE* fopen(char* flilenname, char *mode);
//fopen(�ļ������ļ���ģʽ)
//�ļ������þ���·�������·������ʾ����ģʽ��ʾ�򿪵ķ�ʽ
//�������ص���һ��FILE* ���͵Ľṹ��ָ��
//��� 
//�����ļ�ʱϵͳ���Զ������ļ��ڴ�����һ���ļ���Ϣ�� 
//�ļ���Ϣ����FILE�͵Ľṹ�壬��������˸����ļ������Ϣ
//����fopen���ص����ļ���Ϣ������ʼ��ַ
//�ɸ��ݷ��صĵ�ַ�����ļ���Ϣ�� �ﵽ�����ļ���Ŀ��
//�ر��ļ����� fclose
//fclose(FILE* stream)
//fclose(���ļ�������ָ��) 
//ͨ��ָ���ҵ��ļ���Ϣ�� �ͷ��ļ���Ϣ�����ڴ�
//���Ӧ��ָ���óɿ�ָ��
//int main()
//{
//	FILE* p = fopen("test.txt", "r"); //���򿪳ɹ� �����ļ���Ϣ����ַ ʧ�� ���ؿ�ָ��'w'Ϊд ���򴴽�һ�����ļ� ���� д����ʽ���ԭ�����ļ��ڴ����ٵ� ���һ�����ļ�
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		fclose(p);
//		p = NULL;
//	}
//	return 0;
//}
//�ַ�������� fputc(���ݣ�FILE* stream) ���������������  ���������ʲô ��
//�ַ����뺯�� int fgetc(FILE* stream)  ����������������
//int main()
//{//���ļ���д
//	FILE* write = fopen("test.txt", "w");
//	if (write == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//
//	fputc('b',write );
//	fputc('i',write);
//	fputc('t',write );
//	//�ر��ļ�
//	fclose(write);
//	write = NULL;
//	return 0;
//}
//int main()
//{
//	//���ļ��ɶ�
//	FILE* read = fopen("test.txt", "r");
//	if (read == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//
//	printf("%c", fgetc(read));
//	printf("%c", fgetc(read));
//	printf("%c", fgetc(read));
//	//�ر��ļ�
//	fclose(read);
//	read = NULL;
//	return 0;
//}
//�Ӽ�������
//�������Ļ
//���̺���Ļ�����ⲿ�豸
//���� ��׼�����豸 stdin
//��Ļ ��׼����豸 stdout
//������ һ������Ĭ�ϴ򿪵������豸
//stdin FILE*
//stdout FILE*
//stderr  FILE*
//int main()
//{
//	int ch = fgetc(stdin); //fgetc ����������������
//	fputc(ch, stdout); //fputc���������������
//
//}
//�ܽ� put ����� �� ������� �� ���Ŀ�꣩
//fgetc �����루�� ��������ֵΪ����Ŀ�� 
