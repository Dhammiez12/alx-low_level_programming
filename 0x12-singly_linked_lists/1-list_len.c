#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * list_len - A function that returns the number
 * of elements in a linked list_t list
 * @h: singly linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
