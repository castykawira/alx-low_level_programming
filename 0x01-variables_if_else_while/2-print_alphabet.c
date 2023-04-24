#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		putchar(la);
	}
	putchar('\n');
	return (0);
}

