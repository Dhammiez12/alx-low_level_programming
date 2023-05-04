#include "main.h"
#include <stdio.h>

/**
 * get_endianness - A function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i;
	char *check;

	i = 1;
	check = (char *)&i;
	return ((int)check[0]);
}
