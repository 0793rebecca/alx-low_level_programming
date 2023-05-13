#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - check for a digit
 * @c: digit to be checked
 * Return: Always 1 (Success) else 0
 */
int _isdigit(int c)
{
		if (c >= '0' && c <= '9')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}

/**
 * main - adds positive integers
 * @argc: array arguments
 * @argv: number of arguments
 * Return:Always 0 (Success) else 1
 */
int main(int argc, char *argv[])
{
		int a = 0;
		int b;
		int c;

		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}

		for (b = 1; b < argv; b++)
		{
			for (c = 0; argv[b][c] != '\0'; c++
					{
					if (!_isdigit(argv[b][c]))
					{
					printf("Error\n");
					return (1);
					}
				}
					a += atoi(argv[b]);
				}
				printf("%d\n", a);
				return (0);
}
