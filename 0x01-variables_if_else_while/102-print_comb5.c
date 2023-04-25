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
			if (m <= 99 && n <= 99)
			{

				int num1 = m / 10;
				int num2 = m % 10;
				int num3 = n / 10;
				int num4 = n % 10;

				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(' ');

				putchar(num3 + '0');
				putchar(num4 + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
