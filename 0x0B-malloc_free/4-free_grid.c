#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2D grid
*
* @grid: 2D grid in question
* @height: height of the grid
*
* No return
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
