#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - A funtion that gets length of string
 * @s: string
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _strdup - A function that duplicates a string
 * @src: source of string
 * Return: pointer to space with copied string
 */

void *_strdup(const char *src)
{
	int len, i;
	char *dest;

	len = _strlen(src);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * add_node_end - A function that adds a new node
 * at the end of a list_t list
 * @head: First node
 * @str: string
 * Return: pointer to current position
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int size;
	list_t *new_node;
	list_t *next_ptr;
	char *copy_str;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	copy_str = strdup(str);
	size = 0;

	while (str[size] != '\0')
		size += 1;

	new_node->str = copy_str;
	new_node->len = size;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	next_ptr = *head;

	while (next_ptr->next != NULL)
		next_ptr = next_ptr->next;

	next_ptr->next = new_node;
	return (*head);
}
