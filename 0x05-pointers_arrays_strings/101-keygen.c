#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11

/**
 * main - a program that generates random valid passwords
 * for program  101-crackme
 * Return: Always 0
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyz";
	int i, index;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		index = rand() % 26;
		password[i] = charset[index];
	}
	password[i] = '\0';

	printf("Random password: %s\n", password);

	return 0;
}
