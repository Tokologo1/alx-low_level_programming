#include "main.h"
/**
 * print_square - Print a square with #
 * @size: size square to print
 * Return: to the value of void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = size; i > 0; i++)
	{
		for (j = size; j > 0; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
