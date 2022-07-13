#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	//数组名是首元素地址
	//1.sizeof（数组名）-数组名表示整个数组
	//2.&数组名--数组名表示整个数组

	//一维数组
	//int a[] = { 1, 2, 3, 4 };//4*4=16
	//printf("%d\n", sizeof(a));//16   sizeof（数组名）-计算的是数组总大小-单位是字节-16
	//printf("%d\n", sizeof(a + 0));//4/8  数组名这里表示首元素的值，a+0还是首元素地址，地址大小就是4/8字节
	//printf("%d\n", sizeof(*a));//4 首元素
	//printf("%d\n", sizeof(a + 1));//4/8  数组名这里表示首元素的值，a+1还是第二个元素地址，地址大小就是4/8字节
	//printf("%d\n", sizeof(a[1]));//4 第二个元素地址
	//printf("%d\n", sizeof(&a));//4/8  &a是数组地址
	//printf("%d\n", sizeof(*&a));//16  *&抵消了，相当于sizeof（a）
	//printf("%d\n", sizeof(&a + 1));//4/8 跳过整个数组，但还是个地址
	//printf("%d\n", sizeof(&a[0]));//4/8  首元素地址  
	//printf("%d\n", sizeof(&a[0] + 1));//4/8  第二个元素地址 

	//字符数组
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	printf("%d\n", strlen(arr));//随机，找到‘\0’为止
	printf("%d\n", strlen(arr + 0));//随机
	//printf("%d\n", strlen(*arr));//报错
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//随机
	printf("%d\n", strlen(&arr + 1));//随机-6
	printf("%d\n", strlen(&arr[0] + 1));//随机-1

	//printf("%d\n", sizeof(arr));//6 整个数组大小
	//printf("%d\n", sizeof(arr + 0));//4/8 首元素地址大小
	//printf("%d\n", sizeof(*arr));//1 首元素大小
	//printf("%d\n", sizeof(arr[1]));//1 首元素大小
	//printf("%d\n", sizeof(&arr));//4/8 地址
	//printf("%d\n", sizeof(&arr + 1));//4/8 跳过整个数组的地址
	//printf("%d\n", sizeof(&arr[0] + 1));//4  第二个元素地址


	return 0;
}


//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
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
//	//比较两个整型的值
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
//	//比较名字就是比较字符
//	//字符串比较不能直接用><=来比较，应该有strcmp函数比较
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[3] = { { "zhangsan", 10 }, { "lisi", 30 }, { "wangwu", 20 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);//用年龄排序
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);//用名字排序
//	//第一个参数：待排序数组的首元素地址
//	//第二个参数：待排序数组的元素个数
//	//第三个参数：待排序数组的每个元素的大小-单位是字节
//	//第四个参数：是函数指针，比较两个元素的所有函数的地址-这个函数使用者自己实现
//	//			  函数指针的两个参数是：待比较两个元素的地址
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
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两元素比较
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				//交换
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
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中元素
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



//计算器

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
//	printf("请输入操作数：");
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
//		printf("请选择：");
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
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
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
//	//pfArr函数是一个函数指针数组 - 转移表
//	int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input==0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误！\n");
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
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//
//		}
//
//	} while (input);
//	return 0;
//}



//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针pf,能够指向my_strcpy
//char* (*pf)(char*, const char*);
////2.写一个函数指针数组,能够存放4个my_strcpy函数的地址
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
//	//指针数组
//	//int* arr[5];
//	//需要一个数组，这个数组可以存放四个函数的地址 - 函数指针的数组
//	int (*pa)(int, int) = Add;//一个函数指针
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };//将函数指针中的名字换成数组形式
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5,-1,6,0
//	}
//
//	return 0;
//}



//函数指针--指向函数的指针
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
//	//&函数名与 函数名，都是函数地址
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);
//
//	int (*pa)(int, int) = Add;//函数指针
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


//参数是数组形式
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
////参数是指针形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));//*(p + i)找到行
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


//数组指针-指针
//int main()
//{
//	int* p = NULL;//p是整型指针-指向整型的指针-可以存放整型的地址
//	char* pc = NULL;//pc是字符型指针-指向字符的指针-可以存放字符的地址
//	//数组指针-指向数组的指针-存放数组的地址
//	//int arr[10] = { 0 };
//	//arr -首元素地址
//	//&arr[0]-首元素地址
//	//&arr-数组的地址
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;//数组的地址要存起来
//	//上面的p就是数组指针
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


//指针数组是数组，存放指针
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[5];//存放整型指针的数组-指针数组
//	char* pch[5];//存放字符型指针的数组-指针数组
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
//		printf("hehe\n");//输出hehe
//	else
//		printf("haha\n");
//
//	//if (arr1 == arr2)
//	//	printf("hehe\n");
//	//else
//	//	printf("haha\n");//输出haha
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";//"abcdef"是一个常量字符串
//	printf("%c\n", *p);//a
//	printf("%s\n", p);//abcdef,p存的是首字符地址
//	//system("pause");
//	return 0;
//}