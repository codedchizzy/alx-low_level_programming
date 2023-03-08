#include "main.h"

/**
  *factorial - get fact of a num
  *@n: number
  *Return: fact
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
