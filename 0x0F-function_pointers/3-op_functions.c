#ifndef 3-op_functions.c
#define 3-op_functions.c

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif

/**
 * op_add - Returns the sum of two alphabets
 * @a: first alphabet
 * @b: second alphabet
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two alphabets
 * @a: first alphabet
 * @b: second alphabet
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two alphabets
 * @a: first alphabet
 * @b: second alphabet
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two alpabets
 * @a: first alphabet
 * @b: second alphabet
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two alphabets
 * @a: first alphabet
 * @b: second alphabet
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a / b);
}
