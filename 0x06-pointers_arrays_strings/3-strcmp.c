#include "main.h"
#include <stdio.h>

/**
  *_strcmp - strcmp
  *@s1: char
  *@s2: char
  *Return: hhdh
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}

		return (s1[i] - s2[i]);
}
