#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers,
 * using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @sizeL is the number of the element in array
 * @value: is the value to search for
 * Return: first index where value is located
**/

int linear_search(int *array, size_t, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checker array[%Id] = [%d}\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
