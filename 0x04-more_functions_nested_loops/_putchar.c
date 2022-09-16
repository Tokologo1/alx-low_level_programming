#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success at 1
 * error: is -1 returned 
 */
int _pytchar(char c)
{
	return (write(1, &c, 1));
}
