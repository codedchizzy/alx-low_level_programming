#include <stdio.h>
#include <stdlib.h>
/**
  *main - this is the entry point
  *Return: ends the program
  */
int main(void)
{
	int a;

	while (a < 10)
	{
		putchar((a % 10) + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
