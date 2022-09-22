#include "main.h"
/**
 * leet - function with one argument
 * @str: char type pointer argument
 *
 * Description: encodes a strnig in 1337
 * Return: value fof encoded string
 */
cahr *leet(char *str)
{
	char *letters, *replace;
	int count, count2;

	letters = "aAeEoOtTiL";
	replace = "4433007711";

	count = 0;
	while (str[count] != '\0')
	{
		count2 = 0;
		while (letters[count2] != '\0')
		{

		if (str[count] == letter[count2])
		{
			str[count] = replace[count2];
		}
		count2++;
		}
		count++;
	}
	return (str);
}
