#include "main.h"
/**
 * rev_string - prints a string in reverse
 *
 * @s: String to be reversed
 *
 * Retunr: Null
 */
void rev_string(char *s)
{
	int i, k, tmp, len;

	i - o;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	len = i;
	i--;
	while (k < len / 2)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		i--;
		k++;
	}
}
