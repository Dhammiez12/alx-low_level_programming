#include "main.h"
/**
* _isdigit -A function that check if an input is a digit
* @c: takes in a character/digit
* Return: 1 if digit and 0 if otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
