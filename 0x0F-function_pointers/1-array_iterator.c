#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function given as a parameter on each element of an array
 * @array: execute an array
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int d;

	if (array == NULL || action == NULL)
		return;

	for (d = 0; d < size; d++)
	{
		action(array[d]);
	}
}
