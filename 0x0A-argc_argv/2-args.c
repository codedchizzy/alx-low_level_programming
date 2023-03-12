#include <stdio.h>


/**
  *main - starts the program
  *@argc: arg char
  *@argv: arg vect
  *Return: 0
  */


int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
