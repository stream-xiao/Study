#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char a;
	int b;
	printf("�������ת��ΪСд����ĸ��");
	scanf("%c", &a);
	b = a + 32;
	printf("�����%c\n", b);
	printf("ASCII����Ϊ%d", b);
	return 0;
}