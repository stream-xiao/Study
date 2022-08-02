#include <stdio.h>
int main()
{
	int sign = 1;
	double sum = 1.0, deno = 2.0, term;
	while (deno<=100)
	{
		sign = -sign;
		term = sign / deno;
		sum = sum + term;
		deno = deno + 1;      //计算分数的值
	}
	printf("结果是：%f", sum);
	return 0;

}