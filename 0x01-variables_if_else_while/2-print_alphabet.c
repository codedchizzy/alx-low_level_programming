#include <stdio.h>
#include <stdlib.h>

/**
  *main - is the entry point
  *Return: ends the program with value 0 succes
  */

int main(void)
{
	int alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
		putchar('\n');
		return (0);
}

