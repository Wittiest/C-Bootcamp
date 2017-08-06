/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 15:57:28 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/01 15:57:29 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	guess;
	int	low;
	int	high;

	low = 0;
	high = 46342;
	while (1)
	{
		guess = (high + low) / 2;
		if ((guess * guess) > nb)
			high = guess;
		else if ((guess * guess) < nb)
			low = guess;
		if ((guess * guess) == nb)
			return (guess);
		if ((high - low) <= 1)
		{
			return (0);
		}
	}
}
