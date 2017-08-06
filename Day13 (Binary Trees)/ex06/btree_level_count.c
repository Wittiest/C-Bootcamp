/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 07:32:06 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/14 07:32:07 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX(a, b) ((a) > (b) ? ( a) : (b))

#include "ft_btree.h"

int	btree_level_count(btree *root)
{
	if (!root)
		return (0);
	return (1 + MAX(btree_level_count(root->left),
		btree_level_count(root->right)));
}
