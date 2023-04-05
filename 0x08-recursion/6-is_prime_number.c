#include "main.h"

/**
 * is_prime_number - A function that checks if a given number is prime
 * @n: number
 * Return: 1 if number is prime otherwise 0
 **/

int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
	{
		return (0);
	}
	if (_sqrt_recursion(n) == -1)
	{
		return (1);
	}
	else
	return (_sqrt_recursion(n));
}
