#include "main.h"
#include <stdio.h>

/**
 *_strncpy - strncpy
 *@dest: char
 *@src: char
 *@n: int
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
