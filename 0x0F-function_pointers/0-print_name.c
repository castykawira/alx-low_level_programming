#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: pointer to function that prints the name
 **/
void print_name(char *name, void (*f)(char *))
{
	 if (name != NULL && f != NULL)
		 f(name);
}
