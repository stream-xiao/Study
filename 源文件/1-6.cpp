#include <stdio.h>
#pragma warning (disable : 4996)
int max(int a, int b, int c)  //�������жϴ�С
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
	printf("�������һ������");
	scanf("%d", &a);
	printf("������ڶ�������");
	scanf("%d", &b);
	printf("���������������");
	scanf("%d", &c);
	int m = max(a, b, c);
	printf("�����������ֵΪ%d", m);
	return 0;
}