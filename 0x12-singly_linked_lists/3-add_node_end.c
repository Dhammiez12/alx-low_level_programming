#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - A function that gets length of string
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
 * Return: pointer to copied string
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
 * * Return: current position in list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	char *dupstr;

	if (str == NULL)
		return (NULL);
	dupstr = _strdup(str);
	if (dupstr == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = dupstr;
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
