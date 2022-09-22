#include "main.h"
/**
 * print_number - function with one argument
 * @n: int type argument
 *
 * Description: prints an integer
 * Return: value of n
 */
void print_number(int n)
{
	int num;
	num = n;
	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
