#include "main.h"
/**
  *print_last_digit - print last digit
  *@n: the character the we want to prints it last digit
  *Return: end the program
  */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = -l;
	}
	_putchar(l + '0');
	return (l);
}
