#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - A function that frees a linked list
 * @head: First node
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
