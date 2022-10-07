#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create an array, and initialiazes it a specific
 * char @c
 *
 * @size: Size of the array of chars to be created
 *
 * @c: Char Value to initialize the array with
 *
 * Return: Pointer to the array created OR NULL if @size = 0 OR
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
