/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 21:11:02 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/05 21:11:03 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	char	*result;
	char	*temp;
	int		i;
	int		j;

	size = 0;
	while (argc > 1)
		size += ft_strlen(argv[--argc] + 1);
	result = malloc(sizeof(char) * (size + 1));
	temp = result;
	i = 1;
	j = 0;
	while (argv[i])
	{
		while (*argv[i])
			*result++ = *argv[i]++;
		*result++ = '\n';
		i++;
	}
	*--result = '\0';
	return (temp);
}
