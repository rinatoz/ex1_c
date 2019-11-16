#include <stdio.h>
#include "myMath.h"
#define EXP 2.71828

double Exp(int x)
{
	double e=1;
	int temp = x;
	if (x == 0)
	{
		return 1;
	}
	if (x == 1)
	{
		return EXP;
	}
	while (x>0)
	{
		e =e*EXP;
		x -=1;
	}
	x = temp;
	return e;
}
double Pow(double x, int y)
{
	double temp = x;
	double sum = 1;
	if (x == 0)
	{
		return x;
	}
	if (y == 0)
	{
		return 1;
	}
	if (y == 1)
	{
		return x;
	}
	while (y)
	{
		sum =sum*x;
		y = y - 1;
	}
	x = temp;
	return sum;
}