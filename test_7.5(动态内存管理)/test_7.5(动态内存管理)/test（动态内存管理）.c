#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>



//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);//p���˺�������Ч�ˣ��������ڴ�й¶
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);//�����Ǵ�ֵ��str�����Ǹ�����
//	strcpy(str, "hello world");//�����������Ϊstr�ǿ�ָ��
//	printf(str);
//}//int main()
//{
//	Test();
//	return 0;
//}

//��ȷ��
void GetMemory(char **p)
{
	*p = (char *)malloc(100);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}int main()
{
	Test();
	return 0;
}




//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//����ʹ��malloc���ٵ�20�ֽڿռ�
//	//��������20�ֽڲ�������ʹ��
//	//����ϣ����40�ֽڿռ�
//	//������realloc��������̬���ٵĿռ�
//
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}



//int main()
//{
//	//����10�������ֽ�
//	//malloc(10*sizeof(int))//����ʼ��
//	int* p = (int*)calloc(10, sizeof(int));//��ʼ������Ϊ0
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	return 0;
//}



//int main()
//{
//	//���ڴ�����10�����Ϳռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	//int* p = (int*)malloc(INT_MAX);//����ʧ�����
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	return 0;
//}