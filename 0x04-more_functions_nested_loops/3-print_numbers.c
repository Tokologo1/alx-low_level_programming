#include "main.h"
/**
 * print_number - prints 0 to 9
 *
 * Return: Always 0
 */
int print_number(void)
{
	int num = 0;

	while (unum < 10)
	{
		_putchar('0' + num);
		num++;
	}
	_putchar('\n');
}
