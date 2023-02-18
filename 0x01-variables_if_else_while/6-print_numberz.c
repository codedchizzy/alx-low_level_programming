#include <stdio.h>
#include <stdlib.h>
/**
  *main - this is the entry point
  *Return: ends the program
  */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar((a % 10) + '0');
	}
	putchar('\n');
	return (0);
}
