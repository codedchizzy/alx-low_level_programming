#include "main.h"

/**
 * more_numbers - hdhdhj
 */

void more_numbers(void)
{
	int b, a;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
