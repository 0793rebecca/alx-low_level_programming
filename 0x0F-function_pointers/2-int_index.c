#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  a function that searches for an integer
 * @array: an array
 * @size: the number of elements in the array
 * @cmp:  a pointer to the function to be used to compare values
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ix;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (ix = 0; ix < size; ix++)
	{
		if (cmp(array[ix]))
			return (ix);
	}
	return (-1);
}
