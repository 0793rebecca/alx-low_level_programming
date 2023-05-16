#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: the character address
 *
 * Return:Null
 */
char *_strdup(char *str)
{
	char *y;

	int i, b = 0;



	if (str == NULL)

		return (NULL);

	i = 0;

	while (str[i] != '\0')

		i++;



	y = malloc(sizeof(char) * (i + 1));



	if (y == NULL)

		return (NULL);



	for (b = 0; str[b]; b++)

		y[b] = str[b];



	return (y);

}
