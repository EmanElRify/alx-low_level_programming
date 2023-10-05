#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * @grid: the pointer grid to be freed
 * @height: length of one dimension
 * Retuen: None
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
