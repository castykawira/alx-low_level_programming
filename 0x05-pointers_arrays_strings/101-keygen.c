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
	char password[6];
	int i, ascii_value;

	srand(time(NULL));

	for (i = 0; i < 5; i++)
	{
		 ascii_value = rand() % 78 + 48;
		  if (ascii_value >= 58 && ascii_value <= 64)
			  i--;
		  else if (ascii_value >= 91 && ascii_value <= 96)
			   i--;
		  else
			   password[i] = (char) ascii_value;
	}

	password[i] = '\0';

	printf("%s\n", password);

	return (0);
}
