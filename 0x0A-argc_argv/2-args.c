#include <stdio.h>

/**
 * main - A function that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int i;
	for (int i = 0; i < argc; i++)


	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
