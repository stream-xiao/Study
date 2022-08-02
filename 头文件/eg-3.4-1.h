#pragma once
char max(int a, int b, int c)  //Ñ°ÕÒ×î³¤±ß
{
	int m;
	char ch;
	if (a > b)
	{
		m = a;
		ch = 'a';
	}
	if (a < b)
	{
		m = b;
		ch = 'b';
	}
	else
	{
		m = a;
		ch = 'y';
	}
	if (c > m)
	{
		ch = 'c';
	}
	if (c < m)
		;
	else
	{
		ch = 't';
	}
	return(ch);
}