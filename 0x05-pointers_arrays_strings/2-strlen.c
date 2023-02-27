#include "main.h"

/**
 * _strlen - get the legnth of string
 *@s: string
 *Return: returns i
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
