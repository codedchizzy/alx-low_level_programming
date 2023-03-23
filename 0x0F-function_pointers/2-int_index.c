#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 * int_index - int index
 * @array: array
 * @size: size
 * @cmp: cmp
 * Return: return
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
