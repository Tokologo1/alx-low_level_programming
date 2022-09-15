#include <stdio.h>
#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * RetunrAlways 0 (Success)
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > && a > c)
	{
		largest = a;
	}
	else if (b > c && b > a)
	{
		largtest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}

	return (largest);
}
