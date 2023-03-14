#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *str_concat - concatenate 2 strings
  *@s1: first string
  *@s2: second string
  *Return: returns ptr
  */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = 0;
	else
		for (i = 0; s1[i]; i++)
		{
			;
		}
	if (s2 == NULL)
		s2 = 0;
	else
		for (j = 0; s2[j]; j++)
		{
			;
		}
	k = 1 + i + j;

	ptr = malloc(k * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
	{
		ptr[l] = s1[l];
	}
	for (l = 0; l < j; l++)
	{
		ptr[l + i] = s2[l];
	}
	ptr[i + j] = '\0';

	return (ptr);
}
