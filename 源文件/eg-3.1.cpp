#include <stdio.h>
#pragma warning (disable : 4996)
int main()
{
	float f, c;
	printf("�����뻪���¶ȣ�");
	scanf("%f",&f);
	c = (f - 32) * 5 / 9; //�����¶������¶ȵĻ���
    printf("��Ӧ�������¶ȣ�%f", c);
	return 0;
}