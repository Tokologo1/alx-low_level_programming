#include "main.h"
/**
 * _strcpy - Copy string from a source arr to the destination arr
 *
 * @dest: Destination Array
 * @src: Source array
 *
 * Return: Pointer to destination Array
 */
char *_strcpy(char *dest, char *src)
{
	int = 0;

	while (src[i] != '\0')
	{
		*(dest + 1) = src[i];
		i++;
	}

	*(dest + 1) = '\0';

	return (dest);
}
