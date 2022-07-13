#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	int* arr2[3] = { &a, &b, &c };//指针数组，里面存放的是指针
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
// 	int** ppa = &pa;//ppa是二级指针
// 	printf("%d\n", **ppa);//二级指针解引用两次
// 	return 0;
// }


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//首元素地址
//	printf("%p\n", arr+1);//跳一个元素大小
//
//	printf("%p\n", &arr[0]);//首元素地址
//	printf("%p\n", &arr[0]+1);//跳一个元素大小
//
//	printf("%p\n", &arr);//整个数组地址
//	printf("%p\n", &arr+1);//跳一个数组的大小
//	return 0;
//}


////用指针求字符串长度
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

////指针减指针的绝对值是两指针中间元素的个数
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


////指针加减整数时跳位置
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
//	int* pa = &a;//初始化
//	int* p = NULL;//NULL-用来初始化指针的，给指针赋值
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
//		//*p++;//相当于上两步 
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
//	int*p = test();//a为局部变量，函数结束时内存就被释放了
//	*p = 20;
//	return  0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++)//指针越界，野指针
//	{
//		*(p++) = 1;
//	}
//	return 0;
//}


//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量就被初始化为随机值
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//数组名-首元素地址
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
//	char* pc = &a;//会有警告：“初始化”: 从“int *”到“char *”的类型不兼容
//	printf("%p\n", pa);
//	printf("%p\n", pc);//两个结果一样的
//	return 0;
//}