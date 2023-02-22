#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
  *positive_or_negative - is the entry point
  *srand - generate random numbers
  *Return: endsthe program with valye of 0
  */
void positive_or_negative(int i)
{

	/**
	  *srand(time(0));
	  *i = rand() - RAND_MAX / 2;
	  */
	/* your code goes there */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
