#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time());
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastNum);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastNum);
	}
	else
	{
		printf("last digit %i is %i and is less than 6 and not 0\n", n, lastNum);
	}
	return (0);
}
