#pragma once
char max_i(char l, int a, int b, int c) //�ж��Ƿ�Ϊ������
										//���򷵻ء�T��
										//���Ƿ��ء�F��
{
	char r;
	int temp;
	if (l == 'a')
	{
		temp = b + c;
		if (temp > a)
			r = 'T';
		else
		{
			r = 'F';
		}
	}
	if (l == 'b')
	{
		temp = a + c;
		if (temp > b)
			r = 'T';
		else
		{
			r = 'F';
		}
	}
	if (l == 'c')
	{
		temp = b + a;
		if (temp > c)
			r = 'T';
		else
		{
			r = 'F';
		}
	}
	if (l == 'y')
	{
		temp = b + c;
		if (temp > a)
			r = 'T';
		else
		{
			r = 'F';
		}
	}
	if (l == 't')
	{
		temp = b + a;
		if (temp > c)
			r = 'T';
		else
		{
			r = 'F';
		}
	}
	return (r);
}