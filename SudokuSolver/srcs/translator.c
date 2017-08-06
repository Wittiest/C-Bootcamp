#include <stdlib.h>

/*
** The translator will turn the given sudoku puzzle input into a 2D int array.
** We will first allocate the needed memory for a 9x9 array. This is simple,
** as we just need to allocate memory for 9 pointers, and 9 chars for each.
** We will then iterate through the given array of rows, already knowing that it
** has been error-checked, which allows us to assume there are 10 arguments, the
** last 9 of which will be our rows, containing 9 characters (columns) each.
** _____________________________________________________________________________
** In this iteration, will we place an int for each element in the array.
** The given elements will be translated from char to int.
** The empty elements, represented by a '.' will be replaced with a 0.
*/

int		**translator(char **argv)
{
	int **doublearray;
	int *row;
	int i;
	int j;

	doublearray = (int **)malloc(sizeof(int *) * 9);
	i = 0;
	while (i < 9)
	{
		row = (int *)malloc(sizeof(int) * 9);
		doublearray[i] = row;
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] != '.')
			{
				doublearray[i][j] = (argv[i][j] - '0');
			}
			else
				doublearray[i][j] = 0;
			j++;
		}
		i++;
	}
	return (doublearray);
}
