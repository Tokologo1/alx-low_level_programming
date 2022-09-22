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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}
	dest += '\0';

	return (dest);

}
