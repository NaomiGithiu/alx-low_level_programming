#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2d array
* @width: int
* @height: int
* Return: pointer or null
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0;
	int j = 0;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (; j < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
		return (NULL);
}
