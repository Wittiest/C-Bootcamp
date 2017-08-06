#include <unistd.h>

int		ft_error_check(int argc, char **argv);
void	print_solved(int **doublearray);
int		**translator(char **argv);
int		check(int **doublearray, int row, int col, int num);
int		solve(int **doublearray, int row, int col);

/*
** Main first runs error check. Then it advances the array past the name of the
** file. It then stores the rest of the array in our doublearray , which is in
** row-column format. We then begin our solver at 0,0 - if it cannot get a
** solution, we return an error.
*/

int		main(int argc, char **argv)
{
	int **doublearray;

	if (ft_error_check(argc, argv) == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	argv++;
	doublearray = translator(argv);
	if (solve(doublearray, 0, 0))
		print_solved(doublearray);
	else
		write(1, "Error\n", 6);
	return (0);
}
