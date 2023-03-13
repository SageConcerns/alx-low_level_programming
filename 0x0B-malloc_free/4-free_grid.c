#include "main.h"

/**
 * free_grid - allocates a grid
 * @grid: takes in the width of the grid
 * @height: height of grid
 * Return: freeg grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
