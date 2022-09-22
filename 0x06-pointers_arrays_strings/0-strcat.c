#include "main.h"
/**
 * _strcat - function with two aregument
 * @dest: char type pointer 1st argument
 * @src: char type pointer 2dn argument
 *
 * Description: concatenates two string
 * Return: Null
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, destn = 0;

	while (dest[index++])
		destn++;

	for (index = 0; src[index]; index++)
		dest[destn++] = src[index];

	return (dest);
}
