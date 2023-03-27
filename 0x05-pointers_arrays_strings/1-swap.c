#include<stdio.h>
#include "main.h"

/**
*swap_int - A function that swaps the values of two integers.
*@a: swapped value.
*@b: swap value.
*Return: void.
*/

void swap_int(int *a, int *b)
{

	int n = *a;
	*a = *b;
	*b = n;
}
