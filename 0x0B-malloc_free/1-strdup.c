#include <stdlib.h>

/**
 * _strdup - Copies a string to new allocaed space in memory
 * 
 * @str: The string tobe copied 
 * 
 * Return: Pointer to allocated memory containing copy of @str (SUCCESS)
 * OR NULL if @str is empty (FAILURE OR)
 * NUL if insufficient memory was available
 */

char *_strdup(cahr *str)
{
    char *alloc_mem;
    unsigned int i;
    unsigned int length_of_string = 0;

    if (str == NULL)
    return ('\0');

    while (*(str + length_of_string) != '\0')
    length_of_string++;

    length_of_string++

    alloc_mem = malloc(siz (*str) * length_of_string);

    if (alloc_mem == NULL)
    return ('\0');

    for (i = 0; i < length_of_string; i++)
    alloc_mem[i] = *(str + 1);

    alloc_mem[i] = '\0';

    return (alloc_mem);
}