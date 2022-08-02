#include <stdio.h>
int main()
{
	int t=1, i=2;
	while (i<=5)
	{
		t = t * i;
		i = i + 1;  //计算5!的值
		printf("t=%d\n", t);
		printf("i=%d\n", i);
	}
	printf("结果是：%d", t);
	return 0;
}