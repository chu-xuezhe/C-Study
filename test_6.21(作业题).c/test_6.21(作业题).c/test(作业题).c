#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<math.h>

//���Ͼ�����һ�����־��󣬾�������ҵ��������ϵ��µ�������д�������ĳ�������ھ������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O��N��

//int FindNum1(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;//��
//	int y = col - 1;//��
//	while (x <= col - 1 && y >= 0)//���ڼӣ����ڼ�
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
	int x = 0;//��
	int y = *py - 1;//��
	while (x <= *py - 1 && y >= 0)//���ڼӣ����ڼ�
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
	int k = 5;//Ҫ�ҵ���
	int x = 3;
	int y = 3;
	/*int ret = FindNum1(arr, k, 3, 3);*/
	//�����Ͳ���
	int ret = FindNum2(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�ڵ�%d�У���%d��\n", x+1, y+1);
	}
		

	else
		printf("�Ҳ���\n");
	return 0;
}


//����
//int is_left_move(char* str1, char*str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.��str1׷��һ��str1
//	strncat(str1, str1, len1);//׷�ӱ���
//	//2.�ж�str2�Ƿ���׷�Ӻ���Ӵ���
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
//	reverse(arr, arr + k - 1);//��ת���
//	reverse(arr + k, arr + len - 1);//��ת�ұ�
//	reverse(arr, arr + len - 1);//��ת����
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


//ʵ��һ�����������ַ����е�k���ַ�
//ABCD����һ����BCDA
//ABCD����������CDAB

////������ⷨ
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

//������ת��
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
//	reverse(arr, arr + k - 1);//��ת���
//	reverse(arr + k, arr + len - 1);//��ת�ұ�
//	reverse(arr, arr + len - 1);//��ת����
//}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr,4);
//	printf("%s\n", arr);
//	return 0;
//}


//Ԥ��������������ÿ��˵��һ�룩
//A��B�ڶ����ҵ���
//B���ҵڶ���E����
//C���ҵ�һ��D�ڶ�
//D��C����ҵ���
//E���ҵ��ģ�A��һ

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



//������
//����ıɱ�����ֱ�Ϊ�ĸ����е�һ��
//���˹�������
//A��������
//B����C
//C����D
//D��C�ں�˵
//��ֻ֪��һ��˵�ٻ���д�����ж�˭������

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



//��ӡ�������
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


////��������ʹ������ż��ǰ�棨��ǰ������ż�����Ӻ���ǰ��������Ȼ���佻����
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
//		//����ʼ��ż��
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//���ҿ�ʼ������
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//����
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


//����ˮ���⣬һƿ��ˮһԪ��������ƿ��һ����ˮ��20Ԫ���Ժȶ�����ˮ
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	int empty = 0;//��ƿ
//	//�����ˮ
//	total = money;
//	empty = money;
//	//������ˮ
//	while (empty >= 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}



//��ӡ����(������)
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
//	scanf("%d", &line);//��һ���������������7��
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line-1-i ; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//��ӡ�°벿��
//	for (i = 0; i < line-1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * (line-1-i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//��ӡˮ�ɻ���
//���0-100000֮�������ˮ�ɻ���(������)�������153=1^3+5^3+3^3
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int sum = 0;
//		//�ж��Ƿ�Ϊˮ�ɻ�������������
//		//1.����i��λ��-nλ
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����i��ÿһλ��n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i==sum
//		if (i == sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}



//��Sn=a+aa+aaa+aaaa+aaaaa+....��ǰn��֮��
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


//�������ڵ��ַ�������
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
//	//scanf("%s", arr);//��scanf �����ո��ֹ��
//	gets(arr);//��ȡһ��
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
