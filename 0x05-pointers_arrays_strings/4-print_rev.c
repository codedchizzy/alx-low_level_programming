#include "main.h"

void print_rev(char *s)
{
	int length = _strlen(s);

	int i;

	for (i = length - 1; i >= 0; i--)
	{
		if (s[i] == ' ')
		{
			s[i] = '\0';

			_puts(&(s[i]) + 1);
		}
	}
	_puts(s);
}
