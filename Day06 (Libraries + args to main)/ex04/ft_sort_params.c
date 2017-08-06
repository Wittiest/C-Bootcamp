/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 16:01:01 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/04 16:06:40 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

void	sort_by_ascii(int argc, char **argv)
{
	char	*storage;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < (argc - 1))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				storage = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = storage;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int arg;

	arg = 1;
	if (argc <= 1)
		return (0);
	sort_by_ascii(argc, argv);
	while (arg < argc)
	{
		ft_putstr(argv[arg]);
		ft_putchar('\n');
		arg++;
	}
	return (0);
}
