Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@Tokologo1 
Alouie412
/
holbertonschool-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
holbertonschool-low_level_programming/0x03-debugging/2-largest_number.c
@Alouie412
Alouie412 Condensed if/else statements
Latest commit 3672e9d on Sep 24, 2019
 History
 1 contributor
45 lines (42 sloc)  727 Bytes

#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
		largest = a;
	else if (a > b && b < c)
	{
		if (a > c)
			largest = a;
		else
			largest = c;
	}
	else if (b > a && a > c)
		largest = b;
	else if (b > a && a < c)
	{
		if (b > c)
			largest = b;
		else
			largest = c;
	}
	else if (a == b && a == c)
		largest = a;
	else
	{
		if ((a == b && a > c) || (a == c && a > b) || (b == c && a > b))
			largest = a;
		else if ((a == c && a < b) || (b == c && a < b))
			largest = b;
		else
			largest = c;
	}
	return (largest);
}