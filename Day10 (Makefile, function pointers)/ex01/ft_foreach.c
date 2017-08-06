/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 20:34:39 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/10 20:34:40 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The function can take in a pointer to an array of ints.
**	It also takes in an int, which could be the length of this array.
**	It also takes in a pointer to the function it wants to apply to this
**	array.
** _______________________________________________________________________
**	An example could be taking in ft_putnbr, and displaying all of the ints
**	in the array.
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
