/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:58:02 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/25 12:49:13 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	addition(long a, long b)
{
	ft_putnbr(a + b);
}

void	subtraction(long a, long b)
{
	ft_putnbr(a - b);
}

void	division(long a, long b)
{
	if (!b)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(a / b);
}

void	modulo(long a, long b)
{
	if (!b)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(a % b);
}

void	multiplication(long a, long b)
{
	ft_putnbr(a * b);
}
