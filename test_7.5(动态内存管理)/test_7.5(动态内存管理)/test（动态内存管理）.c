#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>





struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//�ͷ��ڴ�
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}




//struct S
//{
//	int n;
//	int arr[0];//δ֪��С��-���������Ա-����Ĵ�С�ǿ��Ե�����
//};

//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//4
//
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	return 0;
//}



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
//}
//int main()
//{
//	Test();
//	return 0;
//}

//��ȷ��
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}




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