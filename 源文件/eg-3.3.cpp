#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char a;
	int b;
	printf("请输入待转换为小写的字母：");
	scanf("%c", &a);
	b = a + 32;
	printf("结果是%c\n", b);
	printf("ASCII代码为%d", b);
	return 0;
}