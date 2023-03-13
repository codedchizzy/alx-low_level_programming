#include <stdio.h>
#include <stdlib.h>

/**
  *main- starts
  *@argc: arg char
  *@argv: arg var
  *Return: 1, 0
  */

int main(int argc, char *argv[])
{
	int cent, i, j, jdiv;
	int result = 0;

	for (i = 0; i < argc; i++)
	{
		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}
		cent = atoi(argv[i]);

		for (j = 25; j >= i; j--)
		{
			if (j < 0)
				printf("0\n");

			if (j == 25 || j == 10 || j == 5 || j == 2 || j == 1)
			{
				if (j <= cent)
				{
					jdiv = cent / j;
					j = cent % j;
					cent = j;

					result += jdiv;
				}
			}
		}
	}
	if (cent % 10 == 0)
		printf("%d\n", result);
	else
		printf("%d\n", result + 1);
	return (0);
}
