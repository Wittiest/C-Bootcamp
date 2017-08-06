/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 13:45:08 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/02 14:02:54 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_interative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb == 0)
	{
		return (1);
	}
	if (0 > nb > 12)
	{
		return (0);
	}
	while (nb > 1)
	{
		i = i * (nb - 1);
		nb--;
	}
	return (i);
}
