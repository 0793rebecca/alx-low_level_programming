#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - to create array of char
 * @c: the character of whose address is being returned
 * @size: the size of the memory to print
 *
 * Return: Null
 */
char *create_array(unsigned int size, char c)
{
	char *r;
	unsigned int f;

	if size == 0
	{
		return (NULL);
	}

	r = (char *) malloc(size * sizeof(char));
	if (r == NULL)
	{
		return (NULL);
	}

	for (f = 0; f < sizw; f++)
	{
		r[f] = c;
	}
	return (r);
}
