#include "main.h"
/**
 * rev_string - prints a string in reverse
 *
 * @s: String to be reversed
 *
 * Retunr: Null
 */
void rev_string(char s)
{
	int i = o, j, right;

	while (s[i]);
	i++;

	j = i /2;
	right = 0;

	while (right != j)
	{
		char temp = s[right];
		int left = i - right - 1;

		s[right] = s[left];
		s[left = temp;

		right++;
	}
}