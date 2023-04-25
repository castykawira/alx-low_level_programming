#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int m, n;

	for (m = 0; m < 100; m++)
	{
		for (n = m; n < 100; n++)
		{
			if (i < j)
			{
				putchar(m / 10 + 48);
				putchar(m % 10 + 48);
				putchar(' ');
				putchar(n / 10 + 48);
				putchar(n % 10 + 48);
				if (m != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

