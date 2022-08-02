#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	float a, b, c, d;
	printf("请输入存款金额：");
	scanf("%f", &a);
	b = a * (1 + 0.0036);
	c = a * (1 + 0.0225);
	d = a * (1 + 0.0099) * (1 + 0.0099);  //计算本息和
	printf("活期本息和为：%f\n", b);
	printf("一年定期本息和为：%f\n", c);
	printf("存两次半年定期的本息和为：%f", d);
	return 0;
}