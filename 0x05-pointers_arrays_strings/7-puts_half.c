#include "main.h"

void puts_half(char *str)
{
	int i, j, l, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		l = i;
	}

	for (j = (l / 2) + 1; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	if ((l % 2) != 0)
	{
		n = ((l - 1) / 2);
		_putchar(str[n]);
	}
		
	_putchar('\n');
}
