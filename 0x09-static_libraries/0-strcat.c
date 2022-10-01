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
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
