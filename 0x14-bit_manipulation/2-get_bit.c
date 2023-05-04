#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: integer
 * @index: starting index
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
