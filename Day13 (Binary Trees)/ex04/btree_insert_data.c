/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 00:17:20 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/14 00:18:22 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
**	First we will check if the given *root is NULL (I am using 0 because I don't
**	know if the evil moulinette will let me include the stdlib.h library to
**	allow for the usage of NULL. If it is 0, this indicates we have been given a
**	nonexistant node in the tree. From the instructions, we are assuming they
**	will only hand us a case where the btree's root is null. In this case, we
**	will create a node at the root with the given item.
**	____________________________________________________________________________
**	Then we check if the comparison of the item in *root and the given item
**	are less than 0. If this is true, we will put it on the left side of the
**	current node by recursively inputting our root's left node and the item.
**	____________________________________________________________________________
**	Otherwise, we will put the item on the right side of our btree.
*/

void	btree_insert_data(btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (*root == 0)
		*root = btree_create_node(item);
	else if (cmpf((*root)->item, item) < 0)
		btree_insert_data(&((*root)->left), item, cmpf);
	else
		btree_insert_data(&((*root)->right), item, cmpf);
}
