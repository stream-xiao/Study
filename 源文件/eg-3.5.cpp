#include "eg-3.5.h"
#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	double a, b, c, x1, x2, p, q;
	char t;
	printf("������a��b��c���ö��Ÿ����������Ԫһ�η������ʽΪax2+bx+c����");
	scanf("%f%f%f", &a, &b, &c);
	
	t = three(a, b, c);
	if (t=='2')
	{
		p = (-b) / (2 * a);
		q = sqrt(pow(b, 2) - 4 * a * c) / (2 * a);
		printf("p=%d,q=%d", p, q);
		x1 = p + q;
		x2 = p - q;
		printf("���������������ֱ�Ϊ��x1 = %f\tx2 = %f", x1, x2);
	}
	else if (t=='1')
	{
		p = (-b) / (2 * a);
		q = sqrt(pow(b, 2) - 4 * a * c) / (2 * a);
		x1 = p + q;
		printf("������һ������Ϊ��x1 = x2 = %d", x1);
	}
	else
		printf("���ݴ��󣡷����޸���");
	return 0;
}