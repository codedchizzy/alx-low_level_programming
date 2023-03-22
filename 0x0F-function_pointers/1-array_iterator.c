#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>

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
