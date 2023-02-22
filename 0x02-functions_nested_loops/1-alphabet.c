#include "main.h"

/**
  *print_alphabet - prints a-z
  *Return: ends the program
  */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
