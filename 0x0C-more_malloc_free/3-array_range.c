#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integer
 * @min: min
 * @max: max
 * Return: arr
 */

int *array_range(int min, int max)
{
	int i, size, *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(*arr) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
