#include "main.h"

/**
 * print_number - this prints the value of the character
 * @n: this is the character to be printed
 */

void print_number(int n)
{
	int digit, divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / divisor >= 10)
		divisor *= 10;

	while (divisor > 0)
	{
		digit = (n / divisor) % 10;
		_putchar(digit + '0');
		divisor /= 10;
	}
}
