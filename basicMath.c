#include <stdio.h>
#include "myMath.h"
#define EXP 2.71828

float add(float x, float y)
{
	float a = x + y;
	return a;
}
float sub(float x, float y)
{
	float a = x - y;
	return a;
}
double mul(double x, int y)
{
	double a = x * y;
	return a;
}
double div(double x, int y)
{
	double a = (double)x / (double)y;
	return a;
}
