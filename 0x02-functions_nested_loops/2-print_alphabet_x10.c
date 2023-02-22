#include <stdio.h>
#include "main.h"
/**
  *print_alphabet_x10 - print a-z x10
  */

void print_alphabet_x10(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		int x;

		for (x = 0; x < 10; x++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
