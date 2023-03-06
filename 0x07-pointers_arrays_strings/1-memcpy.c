#include "main.h"

/**
  * _memcpy - copies src to dest
  * @dest: char
  * @src: char
  * @n: amount of times src shpuld copy to dest
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
