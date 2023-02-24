#include "main.h"

/**
  *print_line - print line n long
  *@n: hwhh
  */
void print_line(int n)
{
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
		}
	else
	{
		_putchar('\n');
	}
}
