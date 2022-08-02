#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	float f, c;
	printf("请输入华氏温度：");
	scanf("%f",&f);
	c = (f - 32) * 5 / 9; //华氏温度摄氏温度的换算
    printf("对应的摄氏温度：%f", c);
	return 0;
}