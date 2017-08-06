/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:06:50 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/12 14:07:28 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	We will be creating each element of the given argument until we hit ac with
**	the increasing index, i. We will set our next to the head of the following
**	list.
*/

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*head;
	int		i;

	list = 0;
	head = 0;
	i = 0;
	while (i < ac)
	{
		list = ft_create_elem(av[i++]);
		list->next = head;
		head = list;
	}
	return (head);
}
