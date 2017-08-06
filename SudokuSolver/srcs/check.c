/*
**	We begin by giving check() our sudoku array, the row and column to check,
**	and the number to check for.
** 	____________________________________________________________________________
**	Then we find round the beginning of the block rows and columns to 1, 4, or 7
** 	We know this because in C, division rounds towards 0, and our array begins
** 	at 0, so we will be able to calculate our box based on its row and column.
** 	____________________________________________________________________________
**	We will iterate from 0, the beginning of our array, to 8.
** 	____________________________________________________________________________
**	In each loop, the first two checks will be rows and columns for a value that
**	matches the number we input.
** 	____________________________________________________________________________
**	The third check, for the numbers 1-9 is a litte bit more complicated,
**	relying upon the row_begin and col_begin that we set up before.
**	Doing [row_begin + (i % 3)] and [col_begin + (i/3)] will allow us to go
**	through all the spots in the box. This is because for the first 3 iterations
**	it will be [row_begin + (0 > 1 > 2)] and [col_begin + (0 > 0 > 0)]
**	it will then be the same row increase, but [col_begin + (1 > 1 > 1)]
**	This ensures we check each spot in the box.
*/

int		check(int **doublearray, int row, int col, int num)
{
	int row_begin;
	int col_begin;
	int i;

	row_begin = (row / 3) * 3;
	col_begin = (col / 3) * 3;
	i = 0;
	while (i < 9)
	{
		if (doublearray[row][i] == num)
			return (0);
		if (doublearray[i][col] == num)
			return (0);
		if (doublearray[row_begin + (i % 3)][col_begin + (i / 3)] == num)
			return (0);
		i++;
	}
	return (1);
}
