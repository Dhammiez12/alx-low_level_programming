#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth
 * node of a listint_t linked list
 * @head: First node
 * @index: The node end
 * Return:nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *next_ptr;

	next_ptr = head;
	for (i = 0; i < index; i += 1)
	{
		if (next_ptr == NULL)
			return (NULL);
		next_ptr = next_ptr->next;
	}
	return (next_ptr);
}
