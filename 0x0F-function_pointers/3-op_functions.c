#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sum of a & b
 * @a: a
 * @b: b
 * Return: the result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - diffrence of a & b
 * @a: a
 * @b: b
 * Return: the result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply of a & b
 * @a: a
 * @b: b
 * Return: the result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a & b
 * @a: a
 * @b: b
 * Return: the result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division by a & b
 * @a: a
 * @b: b
 * Return: the result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
