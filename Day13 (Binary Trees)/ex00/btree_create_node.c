/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:40:29 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/13 21:41:11 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
**	In the btree header, we includes a btree structure.
**	____________________________________________________________________________
**	In ex00, we will be allocating a new element to the btree. It will
**	initliaze item to the argument item and everything else to 0.
**	____________________________________________________________________________
*/

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	node->item = item;
	node->left = 0;
	node->right = 0;
	return (node);
}
