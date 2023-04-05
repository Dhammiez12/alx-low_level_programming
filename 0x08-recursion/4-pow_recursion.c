#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - A funtion that returns the
 * value of x raised to the power of y
 * @x: number
 * @y: exponent
 * Return: x^y = success
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}
