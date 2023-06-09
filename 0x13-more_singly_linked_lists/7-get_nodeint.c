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

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
