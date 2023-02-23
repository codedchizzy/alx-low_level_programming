#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: is the character checked
 *Return: return the result to where it is called
 */

int _isupper(int c)
{
	if (c >= 'A')
	{
		_putchar('1');
	}
	if (c >= 'a')
	{
		_putchar('0');
	}
	return (c);
}
