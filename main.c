#include "myMath.h"
#include <stdio.h>

int main()
{
	printf("enter a number \n");
	double x;
	scanf("%lf", &x);
	double a = Exp(x);
        double b = Pow(x, 3);
	float ex = add((float)a,(float)b);
	ex = sub(ex, 2);
	printf("e^x+x^3-2=%.4f \n",ex);
	a = mul(3, x);
	b = mul(2, Pow(x, 2));
	ex = add((float)a, (float)b);
	printf("3x+2x^2=%.4f\n ", ex);
	a=mul(4, Pow(x, 3));
	a= div(a,5);
	b = mul(2, x);
	ex =sub(a, b);
	printf("(4x^3)/5-2x=%.4f", ex);





}
