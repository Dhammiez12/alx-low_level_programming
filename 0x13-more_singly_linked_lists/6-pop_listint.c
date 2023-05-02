#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: first node
 * Return: contents in head
 */

int pop_listint(listint_t **head)
{
	int data_n;
	listint_t *free_node;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	data_n = 0;
	free_node = *head;
	data_n = (*head)->n;
	*head = (*head)->next;
	free(free_node);
	return (data_n);
}
