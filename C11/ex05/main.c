/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:41:27 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/28 17:35:20 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

enum e_operators	ft_get_operators(char *operator)
{
	if (*operator == '+')
		return (operator_sum);
	if (*operator == '-')
		return (operator_sub);
	if (*operator == '/')
		return (operator_div);
	if (*operator == '%')
		return (operator_mod);
	if (*operator == '*')
		return (operator_mul);
	return (operator_undefined);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	enum e_operators	operator;
	void				(*operators[5])(long, long);

	operators[operator_sum] = &addition;
	operators[operator_sub] = &subtraction;
	operators[operator_div] = &division;
	operators[operator_mod] = &modulo;
	operators[operator_mul] = &multiplication;
	if (argc == 4)
	{
		operator = ft_get_operators(argv[2]);
		if (operator == operator_undefined || ft_strlen(argv[2]) != 1)
			ft_putnbr(0);
		else
			operators[operator](ft_atoi(argv[1]), ft_atoi(argv[3]));
		ft_putchar('\n');
	}
	return (0);
}
