/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 20:36:27 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/03 20:36:28 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *begin;
	char *pattern;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		begin = str;
		pattern = to_find;
		while (*str != '\0' && *pattern != '\0' && *str == *pattern)
		{
			str++;
			pattern++;
		}
		if (!*pattern)
			return (begin);
		str = begin + 1;
	}
	return (0);
}
