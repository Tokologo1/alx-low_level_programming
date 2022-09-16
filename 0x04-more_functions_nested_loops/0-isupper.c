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
	if ( c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
