#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *_islower - check for lowercase
  *@c: is the character to check
  *Return: ends the program
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
