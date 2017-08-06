/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 13:33:39 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/05 13:42:32 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		i;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		*range = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * size);
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}
