/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 13:12:08 by dpearson          #+#    #+#             */
/*   Updated: 2017/06/30 13:12:10 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		result;
	int		neg;

	i = 0;
	result = 0;
	neg = 0;
	if (*str == '-')
	{
		neg = 1;
		str++;
	}
	while (':' >= str[i] && str[i] >= '/')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	if (neg == 1)
	{
		result = -result;
	}
	return (result);
}
