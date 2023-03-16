#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings
 * @s1: srtring 1
 * @s2: string2
 * @n: concatenate n bytes of  string 2
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = 0;
	if (s2 == NULL)
		s2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	if (n >= j)
		n = j;


	ptr =  malloc(sizeof(char) * (n + i + 1));

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
