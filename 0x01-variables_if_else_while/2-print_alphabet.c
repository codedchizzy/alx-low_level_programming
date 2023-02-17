#include <stdio.h>
/**
  *main - this is the entry point
  *Return: this ends the program
  */
int main(void)
{
	char string[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (string[i] != '\0')
	{
		putchar(string[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
