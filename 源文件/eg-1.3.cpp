#include <stdio.h>
#pragma warning(disable : 4996)
int max(int a,int b)
{
	if (a>b)
	{
		return a;
	}
	if (a<b)
	{
		return b;
	}
	else
	{
		return a;
	}

}
int main()
{
	int a, b, m;
	scanf("%d", &a);
	scanf("%d", &b);
	m = max(a, b);
	printf("���ֵ�ǣ�%d", m);
	return 0;
}