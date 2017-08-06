/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 16:29:04 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/07 16:29:08 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ft_get_abs_value(Value)

int	ft_get_abs_value(int x)
{
	if (x == -2147483648)
		return (0);
	if (x < 0)
		return (-x);
	return (x);
}

#endif
