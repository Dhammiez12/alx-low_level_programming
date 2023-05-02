#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a list
 * @head: first node
 */

void free_listint(listint_t *head)
{
	listint_t *free_ptr;

	while (head != NULL)
	{
		free_ptr = head;
		head = head->next;
		free(free_ptr);
	}
}
