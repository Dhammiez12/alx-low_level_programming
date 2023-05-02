#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lists.h"

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: first node
 * Return: 0 if not looped
 * Otherwise - nodes
 */

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
{
	const listint_t *first_ptr, *second_ptr;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	first_ptr = head->next;
	second_ptr = (head->next)->next;

	while (second_ptr)
	{
		if (first_ptr == second_ptr)
		{
			first_ptr = head;
			while (first_ptr != second_ptr)
			{
				nodes++;
				first_ptr = first_ptr->next;
				second_ptr = second_ptr->next;
			}

			first_ptr = first_ptr->next;
			while (first_ptr != second_ptr)
			{
				nodes++;
				first_ptr = first_ptr->next;
			}

			return (nodes);
		}

		first_ptr = first_ptr->next;
		second_ptr = (second_ptr->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - A function that prints a
 * listint_t list safely
 * @head: first node
 * Return: node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
