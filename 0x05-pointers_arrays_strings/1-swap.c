#include "main.h"

/**
 * swap - swaps the values of two integers
 * @a: int a
 * @b: int b
 */
void swap(int *a, int *b)
{
int q;

q = *a;
*a = *b;
*b = q;
}
