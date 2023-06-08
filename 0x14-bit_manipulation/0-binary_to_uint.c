#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if
 *         there is one or more chars in the string b that is not 0 or 1
 *         b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (u = 0; b[u]; u++)
	{
		if (b[u] < '0' || b[u] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[u] - '0');
	}

	return (dec_val);
}
