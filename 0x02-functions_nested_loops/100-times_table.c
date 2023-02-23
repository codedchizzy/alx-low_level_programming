#include "main.h"

/**
 * print_times_table - print times table for n
 * @n: character multiplication
 */

void print_times_table(int n)
{
	int a, b, c;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = b * a;
			if (b == 0)
			{
				_putchar(c + '0');
			}
			if (c < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
