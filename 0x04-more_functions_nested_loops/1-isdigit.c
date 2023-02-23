#include "main.h"

/**
 * _isdigit - checks for digti
 * @c - is the character that is checked
 * Return: returns the value
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
