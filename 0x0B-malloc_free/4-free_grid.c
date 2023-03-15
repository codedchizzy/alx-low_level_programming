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
	int i,j;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
		}
	}
}
