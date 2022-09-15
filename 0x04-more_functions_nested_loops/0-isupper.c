#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character
 * @c - is Integer
 * Return: 1 if c is uppercasae
 * Return: 0 otherwise
 */
int _isupper(int c)
{
    char c;

    if ((c >= 'A') && (c <= 'Z'))
           return (1);
    else
            return (0);

}