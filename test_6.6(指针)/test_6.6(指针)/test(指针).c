#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//ָ������ - ���� - ���ָ�������
//����ָ�� - ָ��
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	int* arr2[3] = { &a, &b, &c };//ָ�����飬�����ŵ���ָ��
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr2[i]));
	}
	return 0;
}


// int main()
// {
// 	int a = 10;
// 	int* pa = &a;
// 	int** ppa = &pa;//ppa�Ƕ���ָ��
// 	printf("%d\n", **ppa);//����ָ�����������
// 	return 0;
// }


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��Ԫ�ص�ַ
//	printf("%p\n", arr+1);//��һ��Ԫ�ش�С
//
//	printf("%p\n", &arr[0]);//��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]+1);//��һ��Ԫ�ش�С
//
//	printf("%p\n", &arr);//���������ַ
//	printf("%p\n", &arr+1);//��һ������Ĵ�С
//	return 0;
//}


////��ָ�����ַ�������
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

////ָ���ָ��ľ���ֵ����ָ���м�Ԫ�صĸ���
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


////ָ��Ӽ�����ʱ��λ��
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int*p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p+=2;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	int* p = NULL;//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a[10] = { 0 };
//	int* p = a;
//	for (int i = 0; i <= 12; i++)
//	{
//		*p = i;
//		p++;
//		//*p++;//�൱�������� 
//	}
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int*p = test();//aΪ�ֲ���������������ʱ�ڴ�ͱ��ͷ���
//	*p = 20;
//	return  0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++)//ָ��Խ�磬Ұָ��
//	{
//		*(p++) = 1;
//	}
//	return 0;
//}


//int main()
//{
//	int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ������ͱ���ʼ��Ϊ���ֵ
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//������-��Ԫ�ص�ַ
//	char* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	printf("11");
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;//���о��棺����ʼ����: �ӡ�int *������char *�������Ͳ�����
//	printf("%p\n", pa);
//	printf("%p\n", pc);//�������һ����
//	return 0;
//}