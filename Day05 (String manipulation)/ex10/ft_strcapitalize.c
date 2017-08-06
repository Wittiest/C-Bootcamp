/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 02:02:19 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/04 02:02:20 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	word_check(char c)
{
	if (c >= 'A' && c <= 'Z')
		return ('u');
	if (c >= 'a' && c <= 'z')
		return ('l');
	if (c >= '0' && c <= '9')
		return ('n');
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (word_check(str[0]) == 'l')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if ((word_check(str[i - 1]) == 0) && (word_check(str[i]) == 'l'))
			str[i] -= 32;
		if ((word_check(str[i - 1]) != 0) && (word_check(str[i]) == 'u'))
			str[i] += 32;
		i++;
	}
	return (str);
}
