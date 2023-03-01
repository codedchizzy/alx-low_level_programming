#include "main.h"
#include <ctype.h>

/**
  *string_toupper - to upper
  *@str : jjsh
  *Return: return str
  */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (islower(*p))
		{
			*p = toupper(*p);
		}
		p++;
	}
	return (str);
}
