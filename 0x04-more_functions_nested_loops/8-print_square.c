#include "main.h"

/**
  *print_square - print square
  *@size: size of the square
  */

void print_square(int size)
{
	int a, b;

	if (size > 0)
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
	_putchar('\n');
}
