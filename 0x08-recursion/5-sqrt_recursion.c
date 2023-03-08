#include "main.h"

/**
 * _sqrt - Returns the natural square root of a number
 * @n: The number to find the square root of
 * @i: The current number to check
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - check for square root of number
 * @n: number to find the square root
 * Return: returns thr squareroot
*/


int _sqrt_recursion(int n)
{
		return (_sqrt(n, 0));
}
