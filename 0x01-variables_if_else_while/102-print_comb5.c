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
		for (n = m + 1; n < 100; n++)
		{
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			putchar(' ');
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');

			if (m == 98 && n == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
