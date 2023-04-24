#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 * Return: Always 0
 */
int main(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
	{
		if (le != 'e' && le != 'q')
		{
			putchar(le);
		}
	}

	putchar('\n');

	return (0);
}
