#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A function that prints a name
 * @name: name
 * @f: function
 * Return: nougt
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
