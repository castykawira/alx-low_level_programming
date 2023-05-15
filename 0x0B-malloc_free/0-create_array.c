#include "main.h"
		
#include <stdlib.h>
		
/**
		
 * create_array - Creates an array of chars, and initializes it with a specific char
		
 * @size: size of array to be created
		
 * @c: char to assign
		
 * Return: pointer to the created array, or NULL if fails
		
 */
		
char *create_array(unsigned int size, char c)
		
{
		
	char *array;
		
	unsigned int a;
		

		
	array = malloc(sizeof(char) * size);
		
	if (size == 0 || array == NULL)
		
		return (NULL);
		

		
	for (a = 0; a < size; a++)
		
		array[a] = c;
		
	return (array);
}
