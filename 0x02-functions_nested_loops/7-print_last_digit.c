#include "main.h"
/**
  *print_last_digit - print last digit
  *@n: the character the we want to prints it last digit
  *Return: end the program
  */

int print_last_digit(int n)
{
	int l = n % 10;

	_putchar(l);
	return (l);
}
