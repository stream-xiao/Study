#include "eg-3.5.h"
#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	double a, b, c, x1, x2, p, q;
	char t;
	printf("请输入a、b、c，用逗号隔开（假设二元一次方程组格式为ax2+bx+c）：");
	scanf("%f%f%f", &a, &b, &c);
	
	t = three(a, b, c);
	if (t=='2')
	{
		p = (-b) / (2 * a);
		q = sqrt(pow(b, 2) - 4 * a * c) / (2 * a);
		printf("p=%d,q=%d", p, q);
		x1 = p + q;
		x2 = p - q;
		printf("方程有两个根，分别为：x1 = %f\tx2 = %f", x1, x2);
	}
	else if (t=='1')
	{
		p = (-b) / (2 * a);
		q = sqrt(pow(b, 2) - 4 * a * c) / (2 * a);
		x1 = p + q;
		printf("方程有一个根，为：x1 = x2 = %d", x1);
	}
	else
		printf("数据错误！方程无根！");
	return 0;
}