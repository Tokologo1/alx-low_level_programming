#include "main.h"
/**
 * print_diagonal - print a diagonal if the number is positive
 * @n: The Character to be count
 *
 */
void print_diagonal(int n)
{
	int prior, i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		prior = i;
		while (prior > 0)
		{
			_putchar(32);
			prior--;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
