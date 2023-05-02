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
    int sum = 0, i;

    srand(time(NULL));

    while (1)
    {
        for (i = 0; i < 5; i++)
        {
            password[i] = rand() % 94 + 33;
        }
        password[5] = '\0';

        for (i = 0; i < 5; i++)
        {
            sum += password[i];
        }

        if (sum == 2772)
        {
            printf("%s\n", password);
            break;
        }
        else
        {
            sum = 0;
        }
    }

    return (0);
}
