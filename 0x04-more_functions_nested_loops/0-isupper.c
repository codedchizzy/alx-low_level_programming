#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: is the character checked
 *Return: return the result to where it is called
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (c);
}
