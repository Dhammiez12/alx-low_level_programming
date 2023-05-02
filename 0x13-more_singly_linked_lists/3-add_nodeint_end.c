#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - A function that adds a
 * new node at the end of a listint_t list
 * @head: current place
 * @n: int to add to
 * Return: pointer current position
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next_ptr;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	next_ptr = *head;

	while (next_ptr->next != NULL)
		next_ptr = next_ptr->next;
	next_ptr->next = new_node;
	return (new_node);
}
