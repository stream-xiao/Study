#include <stdio.h>
int main()
{
	int t=1, i=2;
	while (i<=5)
	{
		t = t * i;
		i = i + 1;  //����5!��ֵ
		printf("t=%d\n", t);
		printf("i=%d\n", i);
	}
	printf("����ǣ�%d", t);
	return 0;
}