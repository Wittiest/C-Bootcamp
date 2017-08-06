/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 20:38:48 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/04 20:38:48 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *c;
	char *d;

	c = dest;
	d = src;
	while (*c != '\0')
		c++;
	while (*d != '\0' && nb > 0)
	{
		*c = *d;
		c++;
		d++;
		nb--;
	}
	*c = '\0';
	return (dest);
}
