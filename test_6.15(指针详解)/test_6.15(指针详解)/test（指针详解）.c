#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	//����������Ԫ�ص�ַ
	//1.sizeof����������-��������ʾ��������
	//2.&������--��������ʾ��������

	//һά����
	//int a[] = { 1, 2, 3, 4 };//4*4=16
	//printf("%d\n", sizeof(a));//16   sizeof����������-������������ܴ�С-��λ���ֽ�-16
	//printf("%d\n", sizeof(a + 0));//4/8  �����������ʾ��Ԫ�ص�ֵ��a+0������Ԫ�ص�ַ����ַ��С����4/8�ֽ�
	//printf("%d\n", sizeof(*a));//4 ��Ԫ��
	//printf("%d\n", sizeof(a + 1));//4/8  �����������ʾ��Ԫ�ص�ֵ��a+1���ǵڶ���Ԫ�ص�ַ����ַ��С����4/8�ֽ�
	//printf("%d\n", sizeof(a[1]));//4 �ڶ���Ԫ�ص�ַ
	//printf("%d\n", sizeof(&a));//4/8  &a�������ַ
	//printf("%d\n", sizeof(*&a));//16  *&�����ˣ��൱��sizeof��a��
	//printf("%d\n", sizeof(&a + 1));//4/8 �����������飬�����Ǹ���ַ
	//printf("%d\n", sizeof(&a[0]));//4/8  ��Ԫ�ص�ַ  
	//printf("%d\n", sizeof(&a[0] + 1));//4/8  �ڶ���Ԫ�ص�ַ 

	//�ַ�����
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	printf("%d\n", strlen(arr));//������ҵ���\0��Ϊֹ
	printf("%d\n", strlen(arr + 0));//���
	//printf("%d\n", strlen(*arr));//����
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//���
	printf("%d\n", strlen(&arr + 1));//���-6
	printf("%d\n", strlen(&arr[0] + 1));//���-1

	//printf("%d\n", sizeof(arr));//6 ���������С
	//printf("%d\n", sizeof(arr + 0));//4/8 ��Ԫ�ص�ַ��С
	//printf("%d\n", sizeof(*arr));//1 ��Ԫ�ش�С
	//printf("%d\n", sizeof(arr[1]));//1 ��Ԫ�ش�С
	//printf("%d\n", sizeof(&arr));//4/8 ��ַ
	//printf("%d\n", sizeof(&arr + 1));//4/8 ������������ĵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));//4  �ڶ���Ԫ�ص�ַ


	return 0;
}


//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ��������͵�ֵ
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_float(const void *e1, const void *e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//
//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0, 0.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//	printf("\n");
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ����־��ǱȽ��ַ�
//	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp�����Ƚ�
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[3] = { { "zhangsan", 10 }, { "lisi", 30 }, { "wangwu", 20 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);//����������
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);//����������
//	//��һ���������������������Ԫ�ص�ַ
//	//�ڶ��������������������Ԫ�ظ���
//	//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����к����ĵ�ַ-�������ʹ�����Լ�ʵ��
//	//			  ����ָ������������ǣ����Ƚ�����Ԫ�صĵ�ַ
//}
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void*base, int sz, int width, int (*cmp)(void*e1,void*e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱Ƚ϶���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//��Ԫ�رȽ�
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				//����
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
//			}
//		}
//	}
//}
//
//void test4()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ�����������Ԫ��
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//
//}
//
//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 10 }, { "lisi", 30 }, { "wangwu", 20 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	test5();
//
//	//bubble_sort(arr, sz);
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//printf("\n");
//	return 0;
//}



//������

//void menu()
//{
//	printf("******  1.Add       2.Sub      ******\n");
//	printf("******  3.Mul       4.Div      ******\n");
//	printf("******        0.exit           ******\n");
//	printf("*************************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("�������������");
//	scanf("%d%d", &x, &y);
//	printf("%d\n",pf(x,y));
//}
//
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr������һ������ָ������ - ת�Ʊ�
//	int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input==0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	} while (input);
//	return 0;
//}


//int main()
//{	
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//
//		}
//
//	} while (input);
//	return 0;
//}



//char* my_strcpy(char* dest, const char* src);
////1.дһ������ָ��pf,�ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
////2.дһ������ָ������,�ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfarr[4])(char*, const char*);



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//ָ������
//	//int* arr[5];
//	//��Ҫһ�����飬���������Դ���ĸ������ĵ�ַ - ����ָ�������
//	int (*pa)(int, int) = Add;//һ������ָ��
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };//������ָ���е����ֻ���������ʽ
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5,-1,6,0
//	}
//
//	return 0;
//}



//����ָ��--ָ������ָ��
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	//printf("%d\n", Add(x, y));
//	//&�������� �����������Ǻ�����ַ
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);
//
//	int (*pa)(int, int) = Add;//����ָ��
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", pa(2, 3));
//	return 0;
//}


//void test(int arr[])//ok
//{}
//void test(int arr[10])//ok
//{}
//void test(int *arr)//ok
//{}
//void test2(int *arr[20])//ok
//{}
//void test2(int **arr)//ok
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//������������ʽ
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//}
////������ָ����ʽ
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));//*(p + i)�ҵ���
//			printf("%d ", (*(p + i))[j]);
//		}
//
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (*p)[5] = &arr;
//
//	int arr2[10] = { 0 };
//	int (*pa2)[10] = &arr2;
//	return 0;
//}


//����ָ��-ָ��
//int main()
//{
//	int* p = NULL;//p������ָ��-ָ�����͵�ָ��-���Դ�����͵ĵ�ַ
//	char* pc = NULL;//pc���ַ���ָ��-ָ���ַ���ָ��-���Դ���ַ��ĵ�ַ
//	//����ָ��-ָ�������ָ��-�������ĵ�ַ
//	//int arr[10] = { 0 };
//	//arr -��Ԫ�ص�ַ
//	//&arr[0]-��Ԫ�ص�ַ
//	//&arr-����ĵ�ַ
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;//����ĵ�ַҪ������
//	//�����p��������ָ��
//
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//		printf("%d ", *(arr[i]));
//	return 0;
//}


//ָ�����������飬���ָ��
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[5];//�������ָ�������-ָ������
//	char* pch[5];//����ַ���ָ�������-ָ������
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	if (p1 == p2)
//		printf("hehe\n");//���hehe
//	else
//		printf("haha\n");
//
//	//if (arr1 == arr2)
//	//	printf("hehe\n");
//	//else
//	//	printf("haha\n");//���haha
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";//"abcdef"��һ�������ַ���
//	printf("%c\n", *p);//a
//	printf("%s\n", p);//abcdef,p��������ַ���ַ
//	//system("pause");
//	return 0;
//}