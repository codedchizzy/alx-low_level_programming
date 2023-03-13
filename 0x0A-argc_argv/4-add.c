#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
  *main - start
  *@argc: arg char
  *@argv: arg vect
  *Return: 1,0
  */


int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		char *endptr;
		long val = strtol(argv[i], &endptr, 10);


		if (*endptr != '\0' || isspace((unsigned char) argv[i][0]))
		{
			printf("Error\n");
			return (1);
		}
		else if (val < 0)
		{
			continue;
		}
		else
		{
			result += (int) val;
		}

	}
	printf("%d\n", result);

	return (0);
}
