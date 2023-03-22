#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - print name
 * @name: name
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
