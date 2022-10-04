#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * _strdup - Copies a string to new allocaed space in memory
 * 
 * @str: The string tobe copied 
 * 
 * Return: Pointer to allocated memory containing copy of @str (SUCCESS)
 * OR NULL if @str is empty (FAILURE OR)
 * NUL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		
	strnew = (char *)malloc(n + 1 * sizeof(char));
	if (strnew != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			strnew[i] = str[i];
	} else
	{
		return (NULL);
	}
	strnew[i] = '\0';
	return (strnew);
}