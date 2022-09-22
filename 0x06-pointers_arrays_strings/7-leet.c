#include "main.h"
/**
 * leet - function with one argument
 * @str: char type pointer argument
 *
 * Description: encodes a string in 1337
 * Return: value fof encoded string
 */
char *leet(char *str)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	stringCount = 0;
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == str[stringCount])
			{
				str[stringCount] == leetNums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (str);
