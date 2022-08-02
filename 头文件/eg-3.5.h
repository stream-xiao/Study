#pragma once
#include <math.h>
char three(double a, double b, double c)
{
	double d;
	char e;
	d = pow(b, 2) - 4 * a * c;
	if (d > 0)
	{
		e = '2';
	}
	else if (d == 0)
	{
		e = '1';
	}
	else
	{
		e = '0';
	}
	return(e);
}