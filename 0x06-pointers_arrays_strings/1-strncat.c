#include "main.h"

/**
 *_strncat - man strncat
 *@dest: char
 *@src: char
 *@n: int
 *Return: return
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
