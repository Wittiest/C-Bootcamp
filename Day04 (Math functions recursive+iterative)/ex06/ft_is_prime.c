/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:55:14 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/01 18:55:15 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int testprime;
	int max;

	testprime = 23;
	max = nb / 19;
	if (nb <= 0 || nb == 1)
		return (0);
	if ((nb % 2 == 0 && nb != 2) || (nb % 3 == 0 && nb != 3))
		return (0);
	if ((nb % 5 == 0 && nb != 5) || (nb % 13 == 0 && nb != 13))
		return (0);
	if ((nb % 7 == 0 && nb != 7) || (nb % 17 == 0 && nb != 17))
		return (0);
	if ((nb % 11 == 0 && nb != 11) || (nb % 19 == 0 && nb != 19))
		return (0);
	while (testprime < max)
	{
		if (nb % testprime == 0)
			return (0);
		testprime += 2;
	}
	return (1);
}
