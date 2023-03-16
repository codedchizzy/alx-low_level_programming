#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes from s2 to be copied
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
		n = j;

	ptr = malloc(sizeof(*ptr) * (n + i + 1));

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}

	for (k = 0; k < n; k++)
	{
		ptr[i + k] = s2[k];
	}

	ptr[i + j] = '\0';

	return (ptr);
}
