#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 * Return: Null
 */
char *argstostr(int ac, char **av)
{
	int i, a, r = 0, e = 0;
	char *see;

	while (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a]; a++)
			e++;
	}
	e += ac;
	see = malloc(sizeof(char) * e + 1);
	while (see == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a]; a++)
		{
			see[r] = av[i][a];
			r++;
		}
		if (see[r] == '\0')
		{
			see[r++] = '\n';
		}
	}
	return (see);
}
