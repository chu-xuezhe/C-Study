#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>

//杨氏矩阵：有一个数字矩阵，矩阵从左到右递增，从上到下递增，编写程序查找某个数字在矩阵中是否存在
//要求：时间复杂度小于O（N）

//int FindNum1(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;//行
//	int y = col - 1;//列
//	while (x <= col - 1 && y >= 0)//行在加，列在减
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			r = x;
//			c = y;
//			return 1;
//		}
//	}
//	return 0;
//}

int FindNum2(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;//行
	int y = *py - 1;//列
	while (x <= *py - 1 && y >= 0)//行在加，列在减
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int k = 5;//要找的数
	int x = 3;
	int y = 3;
	/*int ret = FindNum1(arr, k, 3, 3);*/
	//返回型参数
	int ret = FindNum2(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("在第%d行，第%d列\n", x+1, y+1);
	}
		

	else
		printf("找不到\n");
	return 0;
}


//法二
//int is_left_move(char* str1, char*str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.将str1追加一个str1
//	strncat(str1, str1, len1);//追加本身
//	//2.判断str2是否在追加后的子串中
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	/*char arr2[] = "cdefab";*/
//	char arr2[] = "cdefa";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);//旋转左边
//	reverse(arr + k, arr + len - 1);//旋转右边
//	reverse(arr, arr + len - 1);//旋转整体
//}
//
//int is_left_move(char* arr1, char* arr2)
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(arr1, 1);
//		int ret = strcmp(arr1, arr2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//实现一个函数左旋字符串中的k个字符
//ABCD左旋一个：BCDA
//ABCD左旋两个：CDAB

////暴力求解法
////void left_move(char* arr,int k)
////{
////	assert(arr!=NULL);
////	int len = strlen(arr);
////	int i = 0;
////	for (i = 0; i < k; i++)
////	{
////		int j = 0;
////		char tmp = *arr;
////		for (j = 0; j < len-1; j++)
////		{
////			*(arr + j) = *(arr + j + 1);
////		}
////		*(arr + len -1) = tmp;
////	}
////
////}

//三步翻转法
//abcdef
//bafedc
//cdefab

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);//旋转左边
//	reverse(arr + k, arr + len - 1);//旋转右边
//	reverse(arr, arr + len - 1);//旋转整体
//}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr,4);
//	printf("%s\n", arr);
//	return 0;
//}


//预测比赛结果（以下每人说对一半）
//A：B第二，我第三
//B：我第二，E第四
//C：我第一，D第二
//D：C最后，我第三
//E：我第四，A第一

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (
//							((b==2)+(a==3)== 1) && 
//							((b==2) + (e==4) == 1) &&
//							((c==1) + (d==2) == 1) &&
//							((c==5) + (d==3) == 1) &&
//							((e==4) + (a==1) == 1)
//							)
//						{
//							if (a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//猜凶手
//发生谋杀案凶手比为四个人中的一个
//四人供词如下
//A：不是我
//B：是C
//C：是D
//D：C在胡说
//已知只有一人说假话，写程序判断谁是凶手

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}



//打印杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////调整数组使奇数在偶数前面（从前往后找偶数，从后往前找奇数，然后将其交换）
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void move(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从左开始找偶数
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从右开始找奇数
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//交换
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	Print(arr, sz);
//	return 0;
//}


//喝汽水问题，一瓶汽水一元，两个空瓶换一个汽水，20元可以喝多少汽水
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	int empty = 0;//空瓶
//	//买的汽水
//	total = money;
//	empty = money;
//	//换的汽水
//	while (empty >= 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}



//打印菱形(奇数行)
//      *
//     ***
//	  *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//	   ***
//	    *

//
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);//算一半的数，如例子是7行
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line-1-i ; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//打印下半部分
//	for (i = 0; i < line-1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//打印水仙花数
//求出0-100000之间的所有水仙花数(自幂数)并输出：153=1^3+5^3+3^3
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int sum = 0;
//		//判断是否为水仙花数（自幂数）
//		//1.计算i的位数-n位
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算i的每一位的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.比较i==sum
//		if (i == sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}



//求Sn=a+aa+aaa+aaaa+aaaaa+....的前n项之和
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int ret = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		//2 22 222 ...
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//将数组内的字符串逆置
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[200] = { 0 };
//	//scanf("%s", arr);//用scanf 遇见空格截止了
//	gets(arr);//读取一行
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
