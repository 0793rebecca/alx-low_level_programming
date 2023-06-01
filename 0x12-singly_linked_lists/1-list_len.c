#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - a function of elements in a linked list_t list
 * @h: pointer to the list_t list
 * Return: number of elements in p
 */
size_t list_len(const list_t *h)
{
	size_t ll = 0;

	while (h)
	{
		ll++;
		h = h->next;
	}
	return (ll);
}
