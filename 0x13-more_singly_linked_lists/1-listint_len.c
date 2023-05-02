#include "lists.h"

/**
 * listint_len - A  function that returns the number
 * of elements in a linked listint_t list
 * @h: singly linked list
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

