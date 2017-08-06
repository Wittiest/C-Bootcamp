/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 00:49:21 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/12 00:49:21 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Notes: We use ifndef and endif to delimit our header files.
**	_________________________________________________________________
**	We use the basic structure format, naming the structure s_list
**	When we put t_list at the bottom, we seem to be making a specific
**	copy of the structure that will be labled under t_list.
**	__________________________________________________________________
**	Inside of t_list we will have the variables that we have put inside
**	of s_list, which is basically an easily copied format
**	__________________________________________________________________
**	When we make *next, we are making a pointer to s_list that we will
**	use to navigate the structure. Data seems to be a random void
**	pointer that they told us to make.
**	__________________________________________________________________
**	At the end we prototype the function we are making.
*/

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list			*ft_create_elem(void *data);

#endif
