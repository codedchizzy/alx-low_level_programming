#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  *main - is the entry point
  *srand - used to generate random digits
  *Return: ends the program with a value of null
  */
int main(void)
{
	int n;
	int a = 10;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % a;
	/* your code goes there */
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}

	return (0);
}
