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

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
