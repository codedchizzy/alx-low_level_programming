#include <stdio.h>
#include <stdlib.h>
/**
  * main - A program that prints the alphabets in lowercase and uppercase
   * Return: Always 0 (Success)
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
