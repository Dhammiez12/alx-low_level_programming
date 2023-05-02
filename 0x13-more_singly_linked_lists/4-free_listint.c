#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a list
 * @head: first node
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
