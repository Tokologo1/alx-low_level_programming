#include "main.h"
/**
 * Display a lower case Alphabet and new line
 *
 * Return:Awalys 0 (Success)
 *
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
