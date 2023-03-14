#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to des
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}



#include "main.h"

/**
  *_strlen_recursion - get legnth of string
  *@s: string
  *Return: value
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}






/**
  *_strdup- duplicate a pointer to the newly allocated space in memory
  *@str: arrey to duplicate
  *Return: ptr
  */

char *_strdup(char *str)
{
	char *ptr = malloc(_strlen_recursion(str) * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	if (ptr != NULL)
		_strcpy(ptr, str);
	return (ptr);
}
