#include "main.h"
/**
 * reverse_array - function with two arguments
 * @a: int type pointer 1st argument
 * @n:
 * int type 2nd argument
 *
 * Description: reverse the content of an array of integers
 * Return: value
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	n--:
		while (i < n)
		{
			tmp = a[i];
			a[i] = a[n];
			a[n] = tmp;
			i++;
			n--;
		}
}
