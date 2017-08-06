/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 21:27:19 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/01 21:27:20 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int	test;
	int	max;

	test = 23;
	max = (nb / 19);
	if (nb <= 0 || nb == 1)
		return (2);
	if ((nb % 2 == 0 && nb != 2) || (nb % 3 == 0 && nb != 3))
		return (ft_find_next_prime(nb + 1));
	if ((nb % 5 == 0 && nb != 5) || (nb % 13 == 0 && nb != 13))
		return (ft_find_next_prime(nb + 1));
	if ((nb % 7 == 0 && nb != 7) || (nb % 17 == 0 && nb != 17))
		return (ft_find_next_prime(nb + 1));
	if ((nb % 11 == 0 && nb != 11) || (nb % 19 == 0 && nb != 19))
		return (ft_find_next_prime(nb + 1));
	while (test < max)
	{
		if (nb % test == 0)
			return (ft_find_next_prime(nb + 1));
		test = test + 2;
	}
	return (nb);
}
