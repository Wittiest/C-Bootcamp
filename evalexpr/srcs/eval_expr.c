/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 05:03:12 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/16 05:04:04 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int		ft_do_math(char op, int nbr, int nbr2)
{
	if (op == '+')
		nbr += nbr2;
	else if (op == '-')
		nbr -= nbr2;
	else if (op == '*')
		nbr *= nbr2;
	else if (op == '/')
		nbr /= nbr2;
	else if (op == '%')
		nbr %= nbr2;
	return (nbr);
}

int		number(char **expr)
{
	int nbr;

	if (**expr == '(')
	{
		(*expr)++;
		nbr = sum(expr);
		if (**expr == ')')
			(*expr)++;
		return (nbr);
	}
	return (ft_weird_atoi(expr));
}

int		factors(char **expr)
{
	int		nbr;
	int		nbr2;
	char	op;

	nbr = number(expr);
	while (**expr)
	{
		op = **expr;
		if (op != '/' && op != '*' && op != '%')
			return (nbr);
		(*expr)++;
		nbr2 = number(expr);
		nbr = ft_do_math(op, nbr, nbr2);
	}
	return (nbr);
}

int		sum(char **expr)
{
	int		nbr;
	int		nbr2;
	char	op;

	nbr = factors(expr);
	while (**expr)
	{
		op = **expr;
		if (op != '+' && op != '-')
			return (nbr);
		(*expr)++;
		nbr2 = factors(expr);
		nbr = ft_do_math(op, nbr, nbr2);
	}
	return (nbr);
}

int		eval_expr(char *str)
{
	char *clean;

	clean = steal_spaces(str);
	return (sum(&clean));
}
