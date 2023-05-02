#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - A function that adds a new node
 * at the beginning of a listint_t list
 * @head: first node
 * @n: int to add
 * Return: current position
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
