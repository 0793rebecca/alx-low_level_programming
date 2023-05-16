#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input one
 * @s2: input two
 * Return: s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *r;
	int i, acc;

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

	while (s2[acc] != '\0')
	{
		acc++;
	}
	r = malloc((i + acc + 1) * sizeof(char));

	if (r == NULL)
	{
		return (NULL);
	}
	i = acc = 0;
	while (s1[i] != '\0')
	{
		r[i] = s1[i];
		i++;
	}
	while (s2[acc] != '\0')
	{
		acc[i] = s2[i];
		i++, acc++;
	}
	r[i] = '\0';
	return (r);
}
