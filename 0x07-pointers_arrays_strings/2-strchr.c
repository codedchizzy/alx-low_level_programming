#include "main.h"

/**
  *_strchr - checks for a char in a string
  *@s: string
  *@c: char being looked for
  *Return: c and 0
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
