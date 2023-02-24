#include "main.h"

/**
  *print_line - print line n long
  *@n: hwhh
  */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(_);
		}
	}
	_putchar('\n');
}
