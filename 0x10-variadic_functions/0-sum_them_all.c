#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all inputs
 * @n: args
 * Return: sum_them_all
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i, sum = 0;
	va_list list;

	if (n == 0)
		return (0);


	va_start(list, n);


	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}

	va_end(list);

	return (sum);
}
