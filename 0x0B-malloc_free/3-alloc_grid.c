#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - creates a 2-D integer grid
  * @width: width of grid
  * @height: height of grid
  * Return: pointer to 2-D integer grid
  */
int **alloc_grid(int width, int height)
{
	int **x;
	int h_index, w_index;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	x = malloc(sizeof(int *) * height);
	if (x == NULL)
	{
		return (NULL);
	}
	for (h_index = 0; h_index < height; h_index++)
	{
		if (x[h_index] == NULL)
		{
			for (; h_index >= 0; h_index--)
			{
				free(x[h_index]);
			}
			free(x);
			return (NULL);
		}
	}
	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
		{
			x[h_index][w_index] = 0;
		}
	}
	return (x);
}

