#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the first dimension
 * @height: the second dimension
 * Return: a pointer of the 2 dimensional array (SUCCESS), Null (Failure)
 */
int **alloc_grid(int width, int height)
{       
        int **arr;
        unsigned int i = 0, j = 0;
        
        if (width <= 0 || height <= 0)
        {       
                return (NULL);
        }       
        arr = (int **) malloc(sizeof(int) * height);
        if (arr == NULL)
        {       
                return (NULL);
        }       
        for (i; i < height; i++)
        {       
                arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j; j < width; j++)
			{
				free(arr[j]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
