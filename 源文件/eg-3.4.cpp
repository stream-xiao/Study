#include <stdio.h>
#include <math.h>
#include "eg-3.4-1.h"
#include "eg-3.4-2.h"
#pragma warning (disable : 4996)
int main()
{
	int a, b, c, s, temp;
	double area;
	char lon, l;
	printf("�����������εĵ�һ���ߣ�");
	scanf("%d", &a);
	printf("�����������εĵڶ����ߣ�");
	scanf("%d", &b);
	printf("�����������εĵ������ߣ�");
	scanf("%d", &c);
	lon = max(a, b, c);
	l = max_i(lon,a,b,c);
	if (l == 'T')
	{
		s = (a + b + c) / 2;
		temp = s * (s - a) * (s - b) * (s - c);
		area = sqrt(double(temp));
		printf("���Ϊ��%f", area);
	}
	else
	{
		printf("����������޷����������Σ�");
	}
	return 0;
}