//方法二
int main()
{
	int num;
	printf("输入：");
	scanf("%d", &num);
	int count = 0;
	////统计补码中几个1?
	for (int i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n", count);
	return 0;
}