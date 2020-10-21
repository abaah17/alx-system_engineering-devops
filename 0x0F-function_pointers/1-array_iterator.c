#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: first parameter
 * @size: second parameter
 * @action: third parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
