#include "main.h"
/**
 * function that prints all natural numbers from n to 98, followed by a new line.
 * @n: the function will make use of the integer n
 * Return:Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n >= 0)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ". n++);
			Printf("%d\n", n);
		}
	}
}
