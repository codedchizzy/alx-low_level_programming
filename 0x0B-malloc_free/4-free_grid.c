#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the memory of a 2d array
 * @grid: grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		for (i = 0; i < height; i++)
			free(grid[j]);
		free(grid);
	}
}
