#include <unistd.h>

/*
** Easily explained functions. They will simply write the rows with new lines.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_solved(int **doublearray)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(('0' + doublearray[i][j]));
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
