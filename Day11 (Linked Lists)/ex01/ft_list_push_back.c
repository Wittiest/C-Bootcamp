/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 09:51:32 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/12 09:51:33 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
**	We create a pointer called navigator, which will point to the new tlist we
**	are creating. If we have a head (pointer to beginning of linked list),
**	we will set nagivator equal to it; otherwise, we will make navigator our
**	linked list head with ft_create_elem.
**	____________________________________________________________________________
**	In the case that we did have a head (*begin_list would return true),
**	we did set navigator to *begin_list. Then we will go through the list with
**	a while loop, making our pointer equal what our next pointer points to.
**	Finally we will reach a point where next is a null pointer, which ends the
**	while loop. At that point, we have the next point to the new spot on the
**	list that we create with ft_create_elem.
*/

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*navigator;

	if (*begin_list)
	{
		navigator = *begin_list;
		while (navigator->next)
			navigator = navigator->next;
		navigator->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
