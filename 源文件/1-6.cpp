#include <stdio.h>
#pragma warning (disable : 4996)
int max(int a, int b, int c)  //三个数判断大小
{
	int m;
	if (a > b)
		m = a;
	if (a < b)
		m = b;
	else
	{
		m = a;
	}
	int z;
	if (c > m)
		z = c;
	if (c < m)
		z = m;
	else
	{
		z = c;
	}
	return(z);
}
int main()
{
	int a, b, c;
	printf("请输入第一个数：");
	scanf("%d", &a);
	printf("请输入第二个数：");
	scanf("%d", &b);
	printf("请输入第三个数：");
	scanf("%d", &c);
	int m = max(a, b, c);
	printf("三个数的最大值为%d", m);
	return 0;
}