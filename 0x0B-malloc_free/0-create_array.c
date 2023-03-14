#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *create_array - Creates an array of char
  *@size: size of the memory alloctaion
  *@c: the character to be used
  *Return: returns NULL if size is 0 and ptr to the
  */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size * sizeof(char));
	unsigned int i;

	if (ptr == NULL)
		return (NULL);

	if (size == 0)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
