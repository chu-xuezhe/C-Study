#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//比较趟数
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//优化
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//比较趟数
	{
		int flag = 0;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				flag = 1;
				int tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag == 0)//一趟下来未发生互换说明已经有序
			break;
	}
}

int main()
{
	int arr[] = { 9, 812, 7, 5, 5, 4, 45, 2, 1, 30 };
	int sz = sizeof(arr) / sizeof(arr[0]);//数组大小要在外面求，不可以在函数内部求
	int i = 0;
	//将其排序为升序
	//arr是数组，我们对数组arr进行传参，实际上传过去的是数组arr首元素的地址&arr[0]
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 5 };
//	return 0;
//}


//求斐波那契数列
//1 1 2 3 5 8 13 21 34 55....

//int count = 0;
//int Fib(int n)
//{
//	if (n== 3)//测试第三个斐波那契数列计算次数
//	{
//		count++;
//	}
//
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 2) + Fib(n - 1);
//	}
//}

//不用递归的方式

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("输入要计算的数：");
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("%d\n", count);
//	return 0;
//}



//求n的阶乘
//int Fac1(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)//n=0时不进循环
//	{
//		sum *= i;
//	}
//	return sum;
//}
//
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fac2(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//	printf("输入要计算的数：");
//	scanf("%d", &n);
//	ret1 = Fac1(n);//用循环的形式
//	ret2 = Fac2(n);//用递归的形式
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}



//编写函数不允许创建临时变量，求字符串的长度。
//int my_strlen(char* str)
//{
//	int count = 0;//为临时变量
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//用递归的方法
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "nihao!!";
//	int len = my_strlen(arr);
//	printf("字符串长度为%d\n", len);
//	return 0;
//}


//接受一个整型值（无符号），按照顺序打印它的每一位。
//例如：输入：1234，输出 1 2 3 4.
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	unsigned int n = 0;
//	printf("输入一个整数：");
//	scanf("%d", &n);
//	//函数递归
//	print(n);
//	//如1234：
//	//print（1234）
//	//print（123）4
//	//print（12）3 4
//	//print（1）2 3 4
//	//1 2 3 4
//	return 0;
//}


//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	//函数调用
//	printf("%d\n", sum);
//	return 0;
//}


//二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	//算法实现
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//			right = mid - 1;
//		else if (k > arr[mid])
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的大小，这个要在函数外求，在函数内部求的不对
//	int k = 19;//接受要查找的数字
//	//                    这里传过去的是arr首元素的地址
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("找不到指定的数字\n");
//	else
//		printf("找到了，下标是%d\n", ret);
//	return 0;
//}

//用函数判断一年是否为闰年
//int is_leap_year(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0)
//		return 1;
//	else if (n % 400 == 0)
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断函数
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}

//用函数判断是否为素数
//int is_prime(int n)
//{
//	//试除法
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n%j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	//打印100-200间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//将arr前5个设置为‘*’
//	printf("%s\n", arr);//打印：“***** world”
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//关机小程序
//关机：shutdown -s -t 60   60s后关机
//取消：shutdown -a
//int main()
//{
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		char input[20] = { 0 };
//		printf("注意！！你的电脑将在一分钟后关机，除非输入'我是猪'取消\n请输入：");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}



//猜数字小游戏
//void menu()
//{
//	printf("************************************\n");
//	printf("******** 1:play    0:exit   ********\n");
//	printf("************************************\n");
//}
//
//void game()
//{
//	//1.生成随机数
//	int ret = 0;
//	ret = rand() % 100 + 1;//生成1-100的数字，rand()的范围：0-32767
//	//printf("%d\n",ret);
//	//2.猜数字
//	int guess;//用来接收猜的数字
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//用时间戳做随机数种子，头文件<stdlib.h>与<time.h>
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();//猜数字游戏
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("选择错误\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}


//在屏幕上打印乘法口诀表
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 9; i++)//确定打印九行
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//%-2d表示打印两位左对齐
//		}
//		printf("\n");//打印完一行换行
//	}
//	return 0;
//}



//找出一组数中的最大值
//int main()
//{
//	int arr[] = { -1, -2, 3, 45, 56, 16, 27, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4....+1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1.0 / i)*flag;
//		flag = flag*(-1);
//	}
//	printf("%lf\n", sum);
//	return 0;
//}




//数9的个数，判断1-100间有多少个9
//分析：如果含9的话，是十位为9，或者个位为9，
//十位为9，则i/10=9
//个位为9，则i % 10 = 9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 9; i < 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//判断一个数是否为素数(例：100-200间)
//判断规则
//1.试除法   产生2 - i-1的数字

//法一
// int main()
// {
// 	int i = 0;
// 	int count = 0;
// 	for (i = 100; i <= 200; i++)
// 	{
// 		int j = 0;
// 		for (j = 2; j < i; j++)
// 		{
// 			if (i%j == 0)
// 				break;
// 		}
// 		if (i == j)
// 		{
// 			printf("%d ", j);
// 			count++;
// 		}
// 	}
// 	printf("\n%d ", count);
// 	return 0;
// }


//法二
//若i不是素数则可以写成i=a*b的形式，其中a和b中有提个是小于等于i的开平方的  
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//sqrt()的库函数：<math.h>
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}


//判断一年是否为闰年：例子：1000-2000年见
//1.能被4整除并且不能被100整除是闰年
//2.能被400整除是闰年

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


// //计算m,n的最大公因数
// //辗转相除法
// int main()
// {
// 	int m = 0;
// 	int n = 0;
// 	int m1 = 0;
// 	int n1 = 0;
// 	printf("输入m，n：");
// 	scanf("%d%d", &m, &n);
// 	m1 = m;
// 	n1 = n;
// 	while (m%n)
// 	{
// 		int r = m%n;
// 		m = n;
// 		n = r;
// 	}
// 	printf("%d与%d的最大公约数是%d\n",m1,n1,n);
// 	return 0;
// }



////三个数顺序输出
//void swap(int* px, int* py)//注意实参形参问题
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("输入三个数：");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		//int tmp = a;
//		//a = b;
//		//b = tmp;
//		swap(&a, &b);
//	}
//	if (a<c)
//	{
//		//int tmp = a;
//		//a = c;
//		//c = tmp;
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		//int tmp = b;
//		//b = c;
//		//c = tmp;
//		swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


// //登录时三次密码错误提示退出
// int main()
// {
// 	int i = 0;
// 	char password[20] = { 0 };
// 	for (i = 0; i < 3; i++)
// 	{
// 		//注意scanf函数应该在循环里面
// 		printf("请输入密码：");
// 		scanf("%s", password);
// 		if (strcmp(password, "123456") == 0)
// 		{
// 			printf("输入正确\n");
// 			break;
// 		}
// 		else
// 		{
// 			printf("输入错误\n");
// 		}
// 	}
// 	if (i == 3)
// 	{
// 		printf("错误三次退出程序\n");
// 	}
// 	return 0;
// }





// //请问循环要循环多少次？
// #include <stdio.h>
// Int main()
// {
//  inti=0;
//  intk=0;
//  for(i=0,k=0; k=0; i++,k++)//0次，因为k=0即为假，不会进入循环
//         k++;
//  return0;
// }



////################渐变至welcome to bit!!!!!!的效果
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//
//	// char arr1[] = "张自恒是个大帅逼!";
//	// char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		left++;
//		right--;
//		//休息1秒
//		Sleep(1000);//单位毫秒，头文件<Windows.h>
//		//清屏
//		system("cls");//执行系统命令的一个函数-cls-清除屏幕头文件<stdlib.h>
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//二分查找
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 15;//要查找的数
//	int left = 0;
//	int right = sz - 1;
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了%d了，下标是%d\n", k, mid);
//			break;
//		}
//
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}


////计算n！
//int main()
//{
//	int n;
//	int i = 1;
//	int sum = 1;
//	printf("输入n:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		sum = sum*i;
//	printf("n!为：%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	getchar();
//	printf("请确认（Y/N）：");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//ctrl+z结束   ctrl+c直接结束
//	//EOF-end of file-> -1
//	while ((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}
//
//	//int ch = getchar();//只能接受一个字母
//	//putchar(ch);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (1)
//	{
//		printf("hehe%d", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	//for (i = 0; i <= 100; i++)
//	//{
//	//	if (i % 2 == 1)
//	//		printf("%d为奇数\n",i);
//	//}
//
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d  ", i);
//		i++;
//	}
//	return 0;
//}


//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};

//int main()
//{
	//利用结构体类型创建一个结构体变量
	//struct Book b1 = { "C语言程序设计", 55 };
	//名字属性是数组不能直接改
	//strcpy(b1.name, "C++");
	//struct Book* pb = &b1;
	//printf("书名：%s\n", pb->name);
	//printf("价格：%d\n", pb->price);
	//printf("书名：%s\n", b1.name);
	//printf("价格：%d\n", b1.price);
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(*pc));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p;
//	p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20;//*-解引用操作符
//	printf("%d\n", a);
//	//printf("%p\n", &a);//打印地址:0059FEC0
//	return 0;
//}


////声明外部函数
//extern Add(int, int);
//
//int main()
//{
//	//int a = (int)3.14;
//	int a = 3;
//	int b = 6;
//	int sum = Add(a, b);
//	printf("sun=%d\n", sum);
//	return 0;
//}


//int Max(int x, int y)
//{
//	if (x >= y)
//		return x;
//	else
//		return y;
//} 
//
//int main()
//{
//	int num1 = 15;
//	int num2 = 20;
//	int max;
//	max = Max(num1, num2);
//	printf("%d和%d的最大值是:%d\n",num1,num2,max);
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	while (line < 20)
//	{
//		printf("敲了%d行代码\n", line);
//		line++;
//	}
//	printf("给你一个好offer！\n");
//	return 0;
//}

//int main()
//{
//		char arr1[] = "abc";
//		char arr2[] = { 'a', 'b', 'c' };
//		printf("%d\n", strlen(arr1));//3
//		printf("%d\n", strlen(arr2));//15(这实际上是随机值因为是找到\0为止)
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c',0 };
//	printf("%s\n", arr1);//abc
//	printf("%s\n", arr2);//乱码：abc烫烫烫烫蘟bc
	//int a = 0;
	//int b = 0;

	//scanf("%d%d", &a, &b);
	//printf("123");
	//return 0;
//}
