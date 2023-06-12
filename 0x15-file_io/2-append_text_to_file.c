#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to add to the end of the file
 *
 * Return: If the function fails or filename is NULL - -1
 *         If the file does not exist the user lacks write permissions - -1
 *         Otherwise - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, y, len = 0;

	while (filename == NULL)
		return (-1);

	while (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	y = write(p, text_content, len);

	while (p == -1 || y == -1)
		return (-1);

	close(p);

	return (1);
}
