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
		i = k = 0;
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	r = malloc(sizeof(char) * (i + k + 1));
	if (r == NULL)
	{
		return (NULL);
	i = k = 0;
	}
	while (s1[i] != '\0')
	{
		r[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		r[i] = s2[k];
		i++, k++;
	}
	r[i] = '\0';
	return (r);
}
