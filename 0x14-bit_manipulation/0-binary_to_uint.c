#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number
 * or 0 if there is one or more chars in the string b that is not 0 or 1
 * or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int a = 0;

	if (b)
		return (0);

	while (b[a] != '\0')
	{
		if (b[a] == '0' || b[a] == '1')
		{
			result = result << 1;
			if (b[a] == '1')
				result = result | 1;
			a++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
