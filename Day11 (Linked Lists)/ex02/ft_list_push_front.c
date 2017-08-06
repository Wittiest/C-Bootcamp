/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 10:20:15 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/12 10:22:40 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
**	In lines 26-28, we are making a new spot in the linked list to place at the
**	beginning. If there is no beginning, we simply point the beginning of the
**	list to the new spot we have made.
**	____________________________________________________________________________
**	If there is already a list, we point the "next" of our new spot to the
**	beginning of the list, and place our new spot at the beginning.
*/

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*newfirstspot;

	newfirstspot = ft_create_elem(data);
	if (!*begin_list)
		*begin_list = newfirstspot;
	else
	{
		newfirstspot->next = *begin_list;
		*begin_list = newfirstspot;
	}
}
