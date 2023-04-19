#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - A function that prints the result
 * of simlple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int_attribute_((_unused_)) argc, char *argv[])
{
	int number1, number2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	op = argv[2];
	number2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != "\0")
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && number2 == 0) || (*op == '%' && number2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	else
	printf("%d\n", get_op_func(op)(number1, number2));

	return (0);
}
