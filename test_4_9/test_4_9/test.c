#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//�Ƚ�����
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

//�Ż�
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//�Ƚ�����
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
		if (flag == 0)//һ������δ��������˵���Ѿ�����
			break;
	}
}

int main()
{
	int arr[] = { 9, 812, 7, 5, 5, 4, 45, 2, 1, 30 };
	int sz = sizeof(arr) / sizeof(arr[0]);//�����СҪ�������󣬲������ں����ڲ���
	int i = 0;
	//��������Ϊ����
	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ���ȥ��������arr��Ԫ�صĵ�ַ&arr[0]
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


//��쳲���������
//1 1 2 3 5 8 13 21 34 55....

//int count = 0;
//int Fib(int n)
//{
//	if (n== 3)//���Ե�����쳲��������м������
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

//���õݹ�ķ�ʽ

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
//	printf("����Ҫ���������");
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("%d\n", count);
//	return 0;
//}



//��n�Ľ׳�
//int Fac1(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)//n=0ʱ����ѭ��
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
//	printf("����Ҫ���������");
//	scanf("%d", &n);
//	ret1 = Fac1(n);//��ѭ������ʽ
//	ret2 = Fac2(n);//�õݹ����ʽ
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}



//��д��������������ʱ���������ַ����ĳ��ȡ�
//int my_strlen(char* str)
//{
//	int count = 0;//Ϊ��ʱ����
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//�õݹ�ķ���
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
//	printf("�ַ�������Ϊ%d\n", len);
//	return 0;
//}


//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//���磺���룺1234����� 1 2 3 4.
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
//	printf("����һ��������");
//	scanf("%d", &n);
//	//�����ݹ�
//	print(n);
//	//��1234��
//	//print��1234��
//	//print��123��4
//	//print��12��3 4
//	//print��1��2 3 4
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
//	//��������
//	printf("%d\n", sum);
//	return 0;
//}


//���ֲ���
//int binary_search(int arr[], int k, int sz)
//{
//	//�㷨ʵ��
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ĵ�С�����Ҫ�ں��������ں����ڲ���Ĳ���
//	int k = 19;//����Ҫ���ҵ�����
//	//                    ���ﴫ��ȥ����arr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("�Ҳ���ָ��������\n");
//	else
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	return 0;
//}

//�ú����ж�һ���Ƿ�Ϊ����
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
//		//�жϺ���
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}

//�ú����ж��Ƿ�Ϊ����
//int is_prime(int n)
//{
//	//�Գ���
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
//	//��ӡ100-200�������
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж��Ƿ�Ϊ����
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
//	memset(arr, '*', 5);//��arrǰ5������Ϊ��*��
//	printf("%s\n", arr);//��ӡ����***** world��
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


//�ػ�С����
//�ػ���shutdown -s -t 60   60s��ػ�
//ȡ����shutdown -a
//int main()
//{
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		char input[20] = { 0 };
//		printf("ע�⣡����ĵ��Խ���һ���Ӻ�ػ�����������'������'ȡ��\n�����룺");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}



//������С��Ϸ
//void menu()
//{
//	printf("************************************\n");
//	printf("******** 1:play    0:exit   ********\n");
//	printf("************************************\n");
//}
//
//void game()
//{
//	//1.���������
//	int ret = 0;
//	ret = rand() % 100 + 1;//����1-100�����֣�rand()�ķ�Χ��0-32767
//	//printf("%d\n",ret);
//	//2.������
//	int guess;//�������ղµ�����
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//��ʱ�������������ӣ�ͷ�ļ�<stdlib.h>��<time.h>
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();//��������Ϸ
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("ѡ�����\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}


//����Ļ�ϴ�ӡ�˷��ھ���
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 9; i++)//ȷ����ӡ����
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//%-2d��ʾ��ӡ��λ�����
//		}
//		printf("\n");//��ӡ��һ�л���
//	}
//	return 0;
//}



//�ҳ�һ�����е����ֵ
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


//����1/1-1/2+1/3-1/4....+1/99-1/100
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




//��9�ĸ������ж�1-100���ж��ٸ�9
//�����������9�Ļ�����ʮλΪ9�����߸�λΪ9��
//ʮλΪ9����i/10=9
//��λΪ9����i % 10 = 9
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


//�ж�һ�����Ƿ�Ϊ����(����100-200��)
//�жϹ���
//1.�Գ���   ����2 - i-1������

//��һ
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


//����
//��i�������������д��i=a*b����ʽ������a��b���������С�ڵ���i�Ŀ�ƽ����  
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//sqrt()�Ŀ⺯����<math.h>
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


//�ж�һ���Ƿ�Ϊ���꣺���ӣ�1000-2000���
//1.�ܱ�4�������Ҳ��ܱ�100����������
//2.�ܱ�400����������

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


// //����m,n���������
// //շת�����
// int main()
// {
// 	int m = 0;
// 	int n = 0;
// 	int m1 = 0;
// 	int n1 = 0;
// 	printf("����m��n��");
// 	scanf("%d%d", &m, &n);
// 	m1 = m;
// 	n1 = n;
// 	while (m%n)
// 	{
// 		int r = m%n;
// 		m = n;
// 		n = r;
// 	}
// 	printf("%d��%d�����Լ����%d\n",m1,n1,n);
// 	return 0;
// }



////������˳�����
//void swap(int* px, int* py)//ע��ʵ���β�����
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
//	printf("������������");
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


// //��¼ʱ�������������ʾ�˳�
// int main()
// {
// 	int i = 0;
// 	char password[20] = { 0 };
// 	for (i = 0; i < 3; i++)
// 	{
// 		//ע��scanf����Ӧ����ѭ������
// 		printf("���������룺");
// 		scanf("%s", password);
// 		if (strcmp(password, "123456") == 0)
// 		{
// 			printf("������ȷ\n");
// 			break;
// 		}
// 		else
// 		{
// 			printf("�������\n");
// 		}
// 	}
// 	if (i == 3)
// 	{
// 		printf("���������˳�����\n");
// 	}
// 	return 0;
// }





// //����ѭ��Ҫѭ�����ٴΣ�
// #include <stdio.h>
// Int main()
// {
//  inti=0;
//  intk=0;
//  for(i=0,k=0; k=0; i++,k++)//0�Σ���Ϊk=0��Ϊ�٣��������ѭ��
//         k++;
//  return0;
// }



////################������welcome to bit!!!!!!��Ч��
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//
//	// char arr1[] = "���Ժ��Ǹ���˧��!";
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
//		//��Ϣ1��
//		Sleep(1000);//��λ���룬ͷ�ļ�<Windows.h>
//		//����
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļͷ�ļ�<stdlib.h>
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//���ֲ���
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 15;//Ҫ���ҵ���
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
//			printf("�ҵ���%d�ˣ��±���%d\n", k, mid);
//			break;
//		}
//
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}


////����n��
//int main()
//{
//	int n;
//	int i = 1;
//	int sum = 1;
//	printf("����n:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		sum = sum*i;
//	printf("n!Ϊ��%d\n", sum);
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
//	printf("���������룺");
//	scanf("%s", password);
//	getchar();
//	printf("��ȷ�ϣ�Y/N����");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//ctrl+z����   ctrl+cֱ�ӽ���
//	//EOF-end of file-> -1
//	while ((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}
//
//	//int ch = getchar();//ֻ�ܽ���һ����ĸ
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
//	//		printf("%dΪ����\n",i);
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
//	char name[20];//C���Գ������
//	short price;//55
//};

//int main()
//{
	//���ýṹ�����ʹ���һ���ṹ�����
	//struct Book b1 = { "C���Գ������", 55 };
	//�������������鲻��ֱ�Ӹ�
	//strcpy(b1.name, "C++");
	//struct Book* pb = &b1;
	//printf("������%s\n", pb->name);
	//printf("�۸�%d\n", pb->price);
	//printf("������%s\n", b1.name);
	//printf("�۸�%d\n", b1.price);
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
//	*p = 20;//*-�����ò�����
//	printf("%d\n", a);
//	//printf("%p\n", &a);//��ӡ��ַ:0059FEC0
//	return 0;
//}


////�����ⲿ����
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
//	printf("%d��%d�����ֵ��:%d\n",num1,num2,max);
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	while (line < 20)
//	{
//		printf("����%d�д���\n", line);
//		line++;
//	}
//	printf("����һ����offer��\n");
//	return 0;
//}

//int main()
//{
//		char arr1[] = "abc";
//		char arr2[] = { 'a', 'b', 'c' };
//		printf("%d\n", strlen(arr1));//3
//		printf("%d\n", strlen(arr2));//15(��ʵ���������ֵ��Ϊ���ҵ�\0Ϊֹ)
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c',0 };
//	printf("%s\n", arr1);//abc
//	printf("%s\n", arr2);//���룺abc���������abc
	//int a = 0;
	//int b = 0;

	//scanf("%d%d", &a, &b);
	//printf("123");
	//return 0;
//}
