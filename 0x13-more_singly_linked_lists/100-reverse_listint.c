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
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
