#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print string
 * @separator: separator
 * @n: n
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char*);
		if (str == NULL)
			printf("(nil)");

		printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
		va_end(arg);

	printf("\n");

}
