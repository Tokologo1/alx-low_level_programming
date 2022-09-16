#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Function that checks a digit
 *
 * @c: Return int type
 *
 * Return: Always 0 (Success) and 1 on fail
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
