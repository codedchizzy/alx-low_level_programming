#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_iterator - array
 * @array: array
 * @size: size
 * @action: funstion pointer
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
