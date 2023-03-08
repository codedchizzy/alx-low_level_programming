#include "main.h"

/**
  *_pow_recursion - power
  *@x: base
  *@y: exp
  *Return: power
  */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y < 0)
		return (1 / _pow_recursion(x, -y));
	else
		return (x * _pow_recursion(x, y - 1));
}
