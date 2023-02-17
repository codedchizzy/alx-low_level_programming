#include <stdio.h>
#include <stdlib.h>

/**
  *main - is the entry point
  *Return: ends the program with value 0 succes
  */

int main(void)
{
	int alp = 'a';
	int ALP = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	while (ALP <= 'Z')
	{
		putchar(ALP);
		ALP++;
	}
		putchar('\n');
		return (0);
}

