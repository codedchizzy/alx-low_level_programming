#include "main.h"

/**
  * _memset - set a block of memory to a perticular value
  * @s: the value to be replaced
  * @b: the character to replace with
  * @n: times to @s be would be replace
  * Return: return @s to the main
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
