#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				if (x != y && x != z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	return (0);

}
