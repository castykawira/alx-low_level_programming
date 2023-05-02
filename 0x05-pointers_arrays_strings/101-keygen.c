#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords
 * for program  101-crackme
 * Return: Always 0
 */
int main(void)
{
	char password[11];
	int i;

	srand(time(NULL));

	 for (i = 0; i < 10; i++)
	 {
		 password[i] = rand() % 94 + 33;
	 }

	 password[10] = '\0';

	 printf("%s\n", password);

	  return 0;
}
