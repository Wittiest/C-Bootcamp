/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 06:50:08 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/16 06:50:09 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_weird_atoi(char **str);
int		ft_strlen(char *str);
char	*steal_spaces(char *expr);
int		eval_expr(char *str);
int		sum(char **expr);
int		factors(char **expr);
int		number(char **expr);
int		ft_do_math(char op, int nbr, int nbr2);

#endif
