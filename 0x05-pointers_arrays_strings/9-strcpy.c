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
	int i;

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
