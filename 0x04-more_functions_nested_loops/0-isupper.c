#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character
 * @c: pinrt Integer
 * Return: give 1 0r 0
 */
int _isupper(int c)
{
    char c;

    if ((c >= 'A') && (c <= 'Z'))
           return (1);
    else
            return (0);

}