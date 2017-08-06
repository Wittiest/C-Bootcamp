/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 23:50:36 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/02 23:50:37 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		fml[3];

	fml[0] = 0;
	fml[1] = 0;
	fml[2] = 1;
	while (str[fml[0]] == ' ' || str[fml[0]] == '\t' || str[fml[0]] == '\r' ||
		str[fml[0]] == '\v' || str[fml[0]] == '\n' || str[fml[0]] == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		fml[2] = -fml[2];
		str++;
	}
	while ('9' >= str[fml[0]] && str[fml[0]] >= '0')
	{
		fml[1] = (fml[1] * 10) + str[fml[0]++] - '0';
	}
	if (fml[2] == -1)
		fml[1] = -fml[1];
	return (fml[1]);
}
