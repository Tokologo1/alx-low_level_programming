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
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[legnth] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
