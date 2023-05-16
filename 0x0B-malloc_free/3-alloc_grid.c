#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - concatenates two strings
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **bod;
	int a, b;

	if (width <= 0 || height <= 0)
	return (NULL);
	bod = malloc(sizeof(int *) * height);
	if (bod == NULL)
	return (NULL);
	for (a = 0; a < height; a++)
	{
		bod[a] = malloc(sizeof(int) * width);
		if (bod[a] == NULL)
		{
			for (; a >= 0; a--)
				free(bod[a]);
			free(bod);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			bod[a][b] = 0;
	}
	return (bod);
}
