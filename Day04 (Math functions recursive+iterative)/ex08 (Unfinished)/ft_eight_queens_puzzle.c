/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 22:37:43 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/01 22:37:45 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int *createboard(int *ptr)
{
	int x;
	int y;

	x = 8;
	y = 8;
	while (x != 0)
	{
		while (y != 0)
		{
			ptr[x][y] = 0;
			y--
		}
		x--
	}
}

int place_queen(int *queen,int x, int y)
{
	queen[x][y] = 1;
}

int safety_check(int *queen, int queenx, int queeny)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= 8)
	{
		while (j <= 8)
		{
			if (queen[i][j] || i = x || j == y)
				return(0);
			else if 
				//diags
		}
		i++;
	}
}
int Solver(int *board)
{
	int currentx;
	int currenty;
	int counter;

	counter = 0;
	board[0][0] = 1;
	currentx = 1; //second column
	currentx = 2; //third row
	while (x <= 8)
	{
		while (y <= 8)
		{
		if safety_check(board, currentx, currenty)
		{
			counter++;
			y = 
		}
		y++;
		}
		x++;
	}

}

int		ft_eight_queens_puzzle(void)
{
	int board[8][8];

	Solver(createboard(board));
	return (solutionamount);
}

int	main(void)
{
	return(ft_eight_queens_puzzle())
}