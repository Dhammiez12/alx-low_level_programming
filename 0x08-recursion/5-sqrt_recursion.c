#include "main.h"

/**
 * _sqrt_recursion - A function that finds the natural square root of a number
 * @n: number
 * Return: square root of n or -1
 **/

	int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	return (sqtRecursive(2, n, n));
}
