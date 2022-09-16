#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Function that checks a digit
 *
 * @c: Return int type
 *
 * Return: Always 0 (Success) and 1 on fail
 */
int _isdigit(int c);
{
	int i = isdigit(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
