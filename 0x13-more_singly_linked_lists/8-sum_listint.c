#include "lists.h"

/**
 * sum_listint - A function that returns the sum of
 * all the data (n) of a listint_t linked list
 * @head: first node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *next_ptr;

	if (!head)
		return (0);
	next_ptr = head;
	sum = 0;
	while (next_ptr != NULL)
	{
		sum += next_ptr->n;
		next_ptr = next_ptr->next;
	}
	return (sum);
}
