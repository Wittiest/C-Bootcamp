/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 00:49:12 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/12 01:52:53 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	We begin by making a function that will be returning our t_list. T_list
**	is a special diagram of s_list that we have made. Just like with s_list, we
**	are beginning by making a pointer to the structure. In our case this will
**	be *s_ptr. This s_ptr is often called the head. It is something we use to
**	"store the whole list," as it always points to the beginning.
**	____________________________________________________________________________
**	We allocate memory in this pointer the size of t_list.
**	____________________________________________________________________________
**	We are using s_ptr -> next = NULL, but we could also do (*s_putr).next.
**	This seems to be the two notations for pointers with structures. This is
**	similar to how we have two notations for arrays.
**	____________________________________________________________________________
**	We use our pointer to set the pointer next to NULL and the pointer data to
**	the parameter data given to the function. I think that either I have a
**	misconception, or the choice of the piscine to name both data is silly and
**	confusing.
**	In the end we return our pointer to t_list.
**	___________________________________________________________________________
**	If we were making a linked list, each spot is a structure with data and a
**	pointer to the next spot.
*/

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *s_ptr;

	s_ptr = malloc(sizeof(t_list));
	s_ptr->next = NULL;
	s_ptr->data = data;
	return (s_ptr);
}
