/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 22:25:23 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/10 22:25:23 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	We know that the given function will return negative if arg1 < arg2.
**	0 if anything else.
**	____________________________________________________________________________
**	We want to return 1 if the array is sorted and 0 if it isn't.
**	____________________________________________________________________________
**	We will do this by returning 1 if we get to an instance where the function
**	returns something below 0
*/

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while ((i + 1) < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}
