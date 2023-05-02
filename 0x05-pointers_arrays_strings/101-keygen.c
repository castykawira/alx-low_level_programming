#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for free
 * program 101-crackme
 * Return: Always 0
 */
int main(void)
{
	int sum = 0, n;
	srand(time(0));
	char password[100];

	for (int i = 0; sum < 2772 - 122; i++)
	{
		 n = rand() % 127;
		 if (n > 32)
		 {
			 password[i] = (char)n;
			 sum += n;
		 }
	}

	password[9] = (char)(2772 - sum);
	password[10] = '\0';
	printf("%s\n", password);
	return (0);
}
