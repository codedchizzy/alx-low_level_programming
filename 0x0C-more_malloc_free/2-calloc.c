#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: bytes
 * Return: calloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *p;
	size_t total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	p = (unsigned char *) ptr;

	for (i = 0; i < total_size; i++)
	{
		p[i] = 0;
	}

	return (ptr);
}
