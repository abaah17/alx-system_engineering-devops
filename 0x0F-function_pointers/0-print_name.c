#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: input parameter for name
 * @f: represents a function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
