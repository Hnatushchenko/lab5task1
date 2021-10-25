#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include "functions.h"

int main()
{
	double pi = M_PI;
	double a = 0.0; // start position
	double b = pi; // end position
	unsigned Steps; // number of steps

	printf("Enter the number of steps: ");
	scanf_s("%u", &Steps);

	double h = (b - a) / (double)Steps; // The value of one step
	printf("Input data: start position = %lf, end position = %lf, one step = %lf\n\n", a, b, h);

	Tabulation1(a, b, h);
	putchar('\n');
	Tabulation2(a, b, h);

	return 0;
}