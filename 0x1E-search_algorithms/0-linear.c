#include "search_algos.h"
/**
 * linear_search - searches linear
 * @array: array to search
 * @size: size to go through
 * @value: value to search?
 * Return: int value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
