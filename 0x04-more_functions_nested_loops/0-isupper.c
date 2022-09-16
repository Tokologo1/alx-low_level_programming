#include "main.h"
#include <ctype.h>
/*
 * _isupper - function that checks for alphabetuc character
 *
 * @c: Return char type
 *
 * Return: Always 0 (Success) and 1 on fail
 */
int _isupper(int c)
{
	int i = isupper(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
