#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: first node
 */

void free_listint2(listint_t **head)
{
	listint_t *free_ptr;
	listint_t *ptr;

	if (head != NULL)
	{
		ptr = *head;
		while ((free_ptr = ptr) != NULL)
		{
			ptr = ptr->next;
			free(free_ptr);
		}
		*head = NULL;
	}
}
