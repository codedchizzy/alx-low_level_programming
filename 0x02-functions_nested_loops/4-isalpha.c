#include <stdio.h>
#include <stdlib.h>

/**
  *_isalpha - checks for alphabet
  *@c: is the character
  *Return: ends the program
  */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
