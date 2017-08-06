/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 13:09:01 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/05 13:19:15 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*arr;
	int i;

	i = 0;
	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	arr = (int *)malloc(max - min);
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
