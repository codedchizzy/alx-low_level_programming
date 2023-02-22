#include <stdio.h>
#include "main.h"
/**
  *print_sign - check for equality
  *@n: character used
  *Return: ends the program
  */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else (n == 0)
	{
		_putchar(0);
		return (0);
	}
}
