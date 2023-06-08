#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int ii, count = 0;
	unsigned long int current;

	for (ii = 63; ii >= 0; ii--)
	{
		current = n >> ii;

		if (current & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}
	if (!count)
		putchar('0');
}
