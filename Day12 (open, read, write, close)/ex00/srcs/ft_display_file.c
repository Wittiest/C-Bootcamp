/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:58:08 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/13 20:06:12 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	We are instructed to display on Standard Output (1), the content of a file
**	given as an argument. We canot use malloc. We must have a fixed-sized array
**	All files given as args will be valid.
**	____________________________________________________________________________
**	We include sys/types.h and sys/stat.h for read. We include fcntl.h for open.
**	We include unistd.h for write and close.
**	____________________________________________________________________________
**	We make BUFF_SIZE 4096 because it is a common page size.
**	____________________________________________________________________________
**	Main checks for errorrs.
**	____________________________________________________________________________
**	We use the int s to check for an error in opening the file. If there isn't
**	one, we will have a while loop that writes the characters until the read
**	returns 0 (end of file) or -1 (for an error)
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE 4096

void	ft_display_file(char *file)
{
	int		s;
	char	buff[BUFF_SIZE];
	int		ret;

	s = open(file, O_RDONLY);
	if (s == -1)
		return ;
	while ((ret = read(s, buff, BUFF_SIZE)) > 0)
		write(1, buff, ret);
	close(s);
}
