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
	printf("请输入三角形的第一条边：");
	scanf("%d", &a);
	printf("请输入三角形的第二条边：");
	scanf("%d", &b);
	printf("请输入三角形的第三条边：");
	scanf("%d", &c);
	lon = max(a, b, c);
	l = max_i(lon,a,b,c);
	if (l == 'T')
	{
		s = (a + b + c) / 2;
		temp = s * (s - a) * (s - b) * (s - c);
		area = sqrt(double(temp));
		printf("面积为：%f", area);
	}
	else
	{
		printf("输入的数据无法构成三角形！");
	}
	return 0;
}