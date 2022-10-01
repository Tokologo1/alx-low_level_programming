#include "main.h"
/**
 * _strlen - Return the length of a string
 *
 * @s: The character holding the string
 *
 * Return: length of the character
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
