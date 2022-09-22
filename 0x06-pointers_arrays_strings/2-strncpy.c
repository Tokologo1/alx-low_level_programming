#include "main.h"
/**
 * _strncpy - function with 3 arguments
 * @dest: char type pointer 1st argument
 * @src: char type pointer 2nd argument
 * @n: int type 3rd argument
 *
 * Description: copies a string
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
