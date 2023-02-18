#include <stdio.h>
#include <stdlib.h>
/**
  *main - entry
  *Return: end
  */
int main(void)
{
	int alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}
