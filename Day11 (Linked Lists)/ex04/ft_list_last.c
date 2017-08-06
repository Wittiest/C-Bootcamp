/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 12:56:25 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/12 12:56:27 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
**	We create a pointer to the beginning node in t_list, begin_list.
**	If there was no such node, we return 0. Else, we will continue until we find
**	a node with next = NULL. This node will be our last one, so we return a
**	pointer to it.
*/

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*head;

	head = begin_list;
	if (head == 0)
		return (0);
	while (head->next)
		head = head->next;
	return (head);
}
