#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: Insert a String
 *
 * Return: void
 */
void puts(char *str)
{
	int i = 0;

	while (strp[i] != '\0')
	{
		if ( i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
