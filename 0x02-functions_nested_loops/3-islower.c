#include "main.h"
/**
 * _islower - function to check for the lowercase haracter
 * c: is the int that will use for the arguments of the function
 * Return:Always 0 (Sucess)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
