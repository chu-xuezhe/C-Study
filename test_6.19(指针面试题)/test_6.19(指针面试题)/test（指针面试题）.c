#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//
////int main()
////{
//	//二维数组
//	//int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));//12*4=48
//	//printf("%d\n", sizeof(a[0][0]));//4
//	//printf("%d\n", sizeof(a[0]));//16 ？a[0]相当于第一行作为一维数组的数组名，实际上计算的是第一行
//	//printf("%d\n", sizeof(a[0] + 1));//4 指针  第一行第二个元素的地址
//	//printf("%d\n", sizeof(*(a[0] + 1)));//4 ？第一行第二个元素大小
//	//printf("%d\n", sizeof(a + 1));//4 指针  第二行的地址
//	//printf("%d\n", sizeof(*(a + 1)));//16？  第二行元素大小
//	//printf("%d\n", sizeof(&a[0] + 1));//4？第二行的地址
//	//printf("%d\n", sizeof(*(&a[0] + 1)));//4*4=16 一行  第二行
//	//printf("%d\n", sizeof(*a));//16？ a是首元素地址--第一行的地址，*a就是第一行，sizeof(*a))就是计算第一行的大小
//	//printf("%d\n", sizeof(a[3]));//16？一行的大小，计算时看形式，并不去访问看是否越界
//	
//
//	//char *p = "abcdef";//p中是a的地址
//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p + 1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//随机
//	//printf("%d\n", strlen(&p + 1));//随机
//	//printf("%d\n", strlen(&p[0] + 1));//5
//
//	//printf("%d\n", sizeof(p));//4  地址
//	//printf("%d\n", sizeof(p + 1));// 4 地址
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p + 1));//4
//	//printf("%d\n", sizeof(&p[0] + 1));//4
//
//
//	//char arr[] = "abcdef";
//
//	////strlen,传入地址
//	//printf("%d\n", strlen(arr));//6 遇见\0为止
//	//printf("%d\n", strlen(arr + 0));//6 同上
//	//printf("%d\n", strlen(*arr));//err  strlen,传入地址
//	//printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//随机值
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//
//	//printf("%d\n", sizeof(arr));//7 数组大小（有'\0'）
//	//printf("%d\n", sizeof(arr + 0));//4 首元素指针
//	//printf("%d\n", sizeof(*arr));//1 首元素
//	//printf("%d\n", sizeof(arr[1]));//1 第二个元素
//	//printf("%d\n", sizeof(&arr));//4 数组地址
//	//printf("%d\n", sizeof(&arr + 1));//4 还是地址
//	//printf("%d\n", sizeof(&arr[0] + 1));//4 第二个元素地址
//
////	return 0;
////}
//
//
////int main()
////{
////	int a[5] = { 1, 0, 3, 4, 5 };
////	int *ptr = (int *)(&a + 1);//&a是数组地址，+1跳过整个数组
////	printf("%d,%d", *(a + 1), *(ptr - 1));//2   5
////	return 0;
////}
//////程序的结果是什么？
//
//
//
////struct Test
////{
////	int Num;
////	char *pcName;
////	short sDate;
////	char cha[2];
////	short sBa[4];
////}*p;
//////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//////已知，结构体Test类型的变量大小是20个字节
////int main()
////{
////	p = (struct Test*)0x100000;
////	printf("%p\n", p + 0x1);//00100014   p+1 跳过整个结构体（20字节）
////	printf("%p\n", (unsigned long)p + 0x1);//00100001  p+1就是直接+1
////	printf("%p\n", (unsigned int*)p + 0x1);//00100004  这个+1是＋unsigned int的大小
////	return 0;
////}
//
//
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);//跳过整个地址
//	int *ptr2 = (int *)((int)a + 1);//向后走了一个字节
//	printf("%x,%x", ptr1[-1], *ptr2);//4  2000000（小端存储）         %x打印16进制
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//里面是（）是逗号表达式所以初始化为{1,3,5}
//	int *p;
//	p = a[0];
//	printf("%d", p[0]);//1
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC,-4
//
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);//跳过整个数组
//	int *ptr2 = (int *)(*(aa + 1));//跳过第一行
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));// 10 5
//	return 0;
//}

//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;//pa指向work，一次跳一个字符串
//	printf("%s\n", *pa);//at 就是向后跳了一个，
//	return 0;
//}


int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };//倒着存
	char***cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *--*++cpp + 3);//ER ?  好好画图
	printf("%s\n", *cpp[-2] + 3);//ST  ?
	printf("%s\n", cpp[-1][-1] + 1);//EW  ?
	return 0; 
}


