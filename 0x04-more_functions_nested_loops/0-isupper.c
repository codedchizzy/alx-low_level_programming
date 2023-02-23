#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase
 * @c: is the character checked
 *Return: return the result to where it is called
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
