#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	float a, b, c, d;
	printf("���������");
	scanf("%f", &a);
	b = a * (1 + 0.0036);
	c = a * (1 + 0.0225);
	d = a * (1 + 0.0099) * (1 + 0.0099);  //���㱾Ϣ��
	printf("���ڱ�Ϣ��Ϊ��%f\n", b);
	printf("һ�궨�ڱ�Ϣ��Ϊ��%f\n", c);
	printf("�����ΰ��궨�ڵı�Ϣ��Ϊ��%f", d);
	return 0;
}