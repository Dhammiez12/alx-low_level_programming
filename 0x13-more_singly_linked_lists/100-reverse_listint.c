#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * reverse_listint - A function that reverses a
 * listint_t linked list
 * @head: first node
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_ptr;
	listint_t *last_ptr;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	previous_ptr = *head;
	last_ptr = (*head)->next;

	while (last != NULL)
	{
		(*head)->next = last_ptr->next;
		last_ptr->next = previous_ptr;
		previous_ptr = last_ptr;
		last_ptr = (*head)->next;
	}
	*head = previous_ptr;

	return (*head);
}
