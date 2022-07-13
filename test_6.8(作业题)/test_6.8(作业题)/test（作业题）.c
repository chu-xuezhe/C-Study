#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//计算 n^k,解： n^k=n*n^k-1
double pow(int n, int k)
{
	if (k < 0)
		return (1.0 / (pow(n, -k)));
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n*pow(n, k - 1);
	}

}

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	double sum = pow(n, k);
	printf("%lf\n", sum);
	return 0;
}

//输入一个数，计算这个数的各位之和。如：1729：1+7+2+9=19

//int DigitSum(unsigned int num)
//{
//	int sum = 0;
//	while (num > 9)
//	{
//		int tmp = num % 10;
//		sum = sum + tmp;
//		num = num / 10;
//	}
//	sum = sum + num;
//	return sum;
//}

//递归
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//		return DigitSum(num / 10) + num % 10;
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num;
//	scanf("%d", &num);
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}

//将参数字符串中的字符反向排列(递归实现)
//int my_strlen(char* arr)
//{
//	int len = 0;
//	while (*arr!='\0')
//	{
//		len++;
//		arr++;
//	}
//	return len;
//}
//
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	/*int len = my_strlen(arr);
//	printf("%d", len);*/
//	return 0;
//}


//用指针打印数组内容
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//打印二进制奇数位与偶数位
//void print(int m)
//{
//	printf("奇数位：");
//	for (int  i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//求两个二进制中不同的位数
//int git_diff_bit(int m,int n)
//{
//	int temp = m^n;
//	int count = 0;
//	while (temp)
//	{
//		temp = temp&(temp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m,&n);
//	int count = git_diff_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//}


//计算数字中二进制中1的个数
//int  count_bit_one(unsigned int n)//用unsigned可以计算负数，不然只能计算正数
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//int  count_bit_one(int n)//想不到用unsigned的话，将其二进制按位与上1
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//int  count_bit_one(int n)//n与n-1相与，一次消掉一个1
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	printf("输入：");
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d\n",count);
//	return 0;
//}


//将两个数组的内容互换
//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int tmp = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}


//将数组的数字逆序
//void Print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}