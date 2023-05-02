#include "lists.h"

/**
 * listint_len - A  function that returns the number
 * of elements in a linked listint_t list
 * @h: singly linked list
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t node_Count;
	const listint_t *next_ptr;

	node_Count = 0;
	next_ptr = h;

	while (next_ptr != NULL)
	{
		next_ptr = next_ptr->next;
		node_Count += 1;
	}
	return (node_Count);
}
