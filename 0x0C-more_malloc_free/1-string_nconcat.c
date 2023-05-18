#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one string to append to
 * @s2: string two to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cord;
	unsigned int i = 0, u = 0, kon1 = 0, kon2 = 0;

	while (s1 && s1[kon1])
		kon1++;
	while (s2 && s2[kon2])
		kon2++;

	if (n < kon2)
		cord = malloc(sizeof(char) * (kon1 + n + 1));
	else
		cord = malloc(sizeof(char) * (kon1 + kon2 + 1));

	if (!cord)
		return (NULL);

	while (i < kon1)
	{
		cord[i] = s1[i];
		i++;
	}

	while (n < kon2 && i < (kon1 + n))
		cord[i++] = s2[u++];

	while (n >= kon2 && i < (kon1 + kon2))
		cord[i++] = s2[u++];

	cord[i] = '\0';

	return (cord);
}
