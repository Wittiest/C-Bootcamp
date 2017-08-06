/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 14:29:56 by dpearson          #+#    #+#             */
/*   Updated: 2017/06/29 22:10:03 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int		ints[2];

	while (!(ints[0] == 98 && ints[1] == 99))
	{
		ints[1]++;
		if (ints[1] > 99)
		{
			ints[0]++;
			ints[1] = 0;
		}
		if (ints[0] < ints[1])
		{
			ft_putchar(ints[0] / 10 + '0');
			ft_putchar(ints[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(ints[1] / 10 + '0');
			ft_putchar(ints[1] % 10 + '0');
			if (!(ints[0] == 98 && ints[1] == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
