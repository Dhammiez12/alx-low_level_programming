#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a listint_t list
 * @head: First node
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
