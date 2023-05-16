#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input one
 * @s2: input two
 * Return: Null
 */
char *str_concat(char *s1, char *s2)
{
	char *r;
	int i, k;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[k] != '\0')
	{
		k++;
	}
	r = malloc((i + k + 1) * sizeof(char));

	if (r == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1; i++)
	{
		r[i] = s1[i];
	}
	for (k = 0; k < s2; k++, k++)
	{
		r[i] = s2[k];
	}
	r[i] = '\0';
	return (r);
}
