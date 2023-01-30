/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:51:18 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/25 13:31:46 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

enum e_operators
{
	operator_sum,
	operator_sub,
	operator_div,
	operator_mod,
	operator_mul,
	operator_undefined,
};

void	addition(long a, long b);
void	division(long a, long b);
void	modulo(long a, long b);
void	multiplication(long a, long b);
void	subtraction(long a, long b);
long	ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(long nb);
void	ft_putstr(char *str);

#endif
