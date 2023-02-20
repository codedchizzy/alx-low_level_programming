#include <stdio.h>

int main(void)
{
	int a, b;
	for (a = 0; a <= 9; a++)
	{
		for (b = a + '1'; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
