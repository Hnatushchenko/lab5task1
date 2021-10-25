#define _USE_MATH_DEFINES
#include "functions.h"
#include <math.h>


double Function1(double x)
{
	double e = M_E;
	double y = pow(e, x) * cos(x) * cos(x);
	return y;
}

int Function2(double x, double* y)
{
	double e = M_E;
	double result = pow(e, x) * cos(x) * cos(x);
	*y = result;

	if (result < 0)
	{
		return -1;
	}
	else if (result == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void Tabulation1(double a, double b, double h)
{
	printf("%22s", "Tabulation 1\n");
	for (int i = 0; i < 32; i++)
	{
		putchar('=');
	}
	putchar('\n');

	double value;
	for (double x = a; x <= b; x += h)
	{
		value = Function1(x);
		printf("X = %lf\tf(x) = %lf\n", x, value);
	}
	for (int i = 0; i < 32; i++)
	{
		putchar('=');
	}
	putchar('\n');
}

void Tabulation2(double a, double b, double h)
{
	printf("%22s", "Tabulation 2\n");
	for (int i = 0; i < 32; i++)
	{
		putchar('=');
	}
	putchar('\n');

	double value;
	for (double x = a; x <= b; x += h)
	{
		Function2(x, &value);
		printf("X = %lf\tf(x) = %lf\n", x, value);
	}
	for (int i = 0; i < 32; i++)
	{
		putchar('=');
	}
	putchar('\n');
}