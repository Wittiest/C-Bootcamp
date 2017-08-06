/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 23:58:53 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/14 00:00:23 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
**	Same as last, except ignore current node until traversing the left tree.
*/

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == 0)
		return ;
	if (root->left)
		btree_apply_prefix(root->left, applyf);
	if (root->item)
		applyf(root->item);
	if (root->right)
		btree_apply_prefix(root->right, applyf);
}
