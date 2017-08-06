/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 06:53:12 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/14 06:53:13 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
**	Assignment: Return first element in tree = to data_ref. Traverse tree in
**	infix traversal (check current node exists, left tree, node, right tree).
**	____________________________________________________________________________
**	First we declare a t_btree pointer named *ret.
**	____________________________________________________________________________
**	Following infix notation, we start out by recursively checking the left tree
**	If the item returned is valid, it will be returned.
**	____________________________________________________________________________
**	If the data_ref wasn't in our left tree, we make sure ret is 0 and that the
**	item compared to our current node has a return of 0 (making them equal). If
**	this is true, we return the item.
**	____________________________________________________________________________
**	Otherwise, we will search the right tree.
*/

void	*btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void *, void *))
{
	t_btree *ret;

	ret = 0;
	if (!root)
		return (0);
	ret = btree_search_item(root->left, data_ref, cmpf);
	if (!(ret || cmpf(root->item, data_ref)))
		ret = root->item;
	if (!ret)
		ret = btree_search_item(root->right, data_ref, cmpf);
	return (ret);
}
