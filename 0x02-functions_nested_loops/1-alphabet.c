#include "main.h"
/**
 * print_alphabet - function to print lower case
 *
 * Return:Awalys 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
