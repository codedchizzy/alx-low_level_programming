#include <stdio.h>
/**
  *main - this is the entry point
  *Return: this ends the program
  */
int main(void)
{
	char string1[] = "abcdefghijklmnopqrstuvwxyz";
	char string2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int i = 0; string1[i] != '\0'; i++)
	{
		putchar(string1[i]);
	}



	for (int i = 0; string2[i] != '\0'; i++)
	{
		putchar(string2[i]);
	}

	putchar('\n');

	return (0);
}
