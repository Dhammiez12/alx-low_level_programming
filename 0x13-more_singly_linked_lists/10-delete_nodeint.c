#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - A function that deletes the node
 * at index of a listint_t linked list
 * @head: First node
 * @index: node
 * Return: head
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *following_nodes;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	following_nodes = current->next;
	current->next = following_nodes->next;
	free(following_nodes);
	return (1);
}
