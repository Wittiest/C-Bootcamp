int		check(int **doublearray, int row, int col, int num);
int		solve(int **doublearray, int row, int col);

/*
** If the given row and column are not equal to 0, they currently have a number
** stored in them for testing or permanently.
** If they do, we will move onto the next column if we aren't at 9 yet. If we
** are, we will move the row forward instead of the column, and reset col to 0.
** If we are in a situation where adding to the column or adding to the row
** makes them 9, then we know we are at the end, so we can return 1, as we
** haven't reached any mistakes on our way from 0,0 to 9,9
*/

int		calculate_number(int **doublearray, int row, int col)
{
	if ((col + 1) < 9)
		return (solve(doublearray, row, col + 1));
	else if ((row + 1) < 9)
		return (solve(doublearray, row + 1, 0));
	else
		return (1);
}

/*
** Essentially, calculate_blank will be the beginning of each guess for a 0
** spot. Spots with 0 will end up in that part of the recursion, and they
** will be assigned values to test. If the check goes through, we set them
** to that value and begin more checks. If it doesn't, we reset the spot to
** 0 for its next guess. Eventually we will set in motion the one that works.
*/

int		calculate_blank(int **doublearray, int row, int col)
{
	int i;

	i = 1;
	while (i <= 9)
	{
		if (check(doublearray, row, col, i))
		{
			doublearray[row][col] = i;
			if (solve(doublearray, row, col))
				return (1);
			else
				doublearray[row][col] = 0;
		}
		i++;
	}
	return (0);
}

/*
** Solve will be a recursive, backtracking function that takes in a copy of the
** current array or current guess, and the spot we guessing about. We begin it
** in the main with the array and 0,0. This is why we can keep using <9 as a
** check, because eventually the array must reach that point and it will have
** been solved by then or be unsolvable.
*/

int		solve(int **doublearray, int row, int col)
{
	if (doublearray[row][col])
		return (calculate_number(doublearray, row, col));
	else
		return (calculate_blank(doublearray, row, col));
}
