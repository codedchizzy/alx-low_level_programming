#include <stdio.h>
#include "main.h"
/**
  *print_alphabet_x10 - print a-z x10
  */

void print_alphabet_x10(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
