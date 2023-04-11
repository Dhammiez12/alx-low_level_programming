#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2d integer
 * grid previously created by alloc_grid
 * @grid: array of ints
 * @height: rows
 * Return: nought
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
