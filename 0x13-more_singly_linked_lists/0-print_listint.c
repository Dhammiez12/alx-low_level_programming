#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints
 * all the elements of a listint_t list
 * @h: singly linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_Count;
	const listint_t *next_ptr;

	next_ptr = h;
	node_Count = 0;

	while (next_ptr != NULL)
	{
		printf("%i\n", next_ptr->n);
		node_Count += 1;
		next_ptr = next_ptr->next;
	}

	return (node_Count);
}
