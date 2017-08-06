/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 22:24:28 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/10 22:24:29 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	We are given an array of pointers, and a function that takes in pointers.
**	We know this other function will return an int. If we iterate through all
**	of the pointers given to us, putting them into the function, and the
**	function returns a 1 in any case, we return 1. Otherwise we return 0.
*/

int		ft_any(char **tab, int (*f)(char *))
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
