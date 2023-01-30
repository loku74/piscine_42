/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:13:29 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/14 16:24:41 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_error(char *base)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (base[i])
	{
		if (base[i] == 32 || (base[i] < 14 && base[i] > 8))
			return (0);
		else if (base[i] == '+' || base[i] == '-')
			return (0);
		while (k < i)
		{
			if (base[k++] == base[i])
				return (0);
		}
		k = 0;
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_t_base(long nbr, char *base, int len_base)
{
	long	quotient;
	long	rest;

	quotient = nbr / len_base;
	rest = nbr % len_base;
	if (quotient >= len_base)
		ft_t_base(quotient, base, len_base);
	else
		write(1, &base[quotient], 1);
	write(1, &base[rest], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;

	n = nbr;
	if (check_error(base))
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n *= -1;
		}
		if (n < ft_strlen(base))
		{
			write(1, &base[n], 1);
			return ((void)0);
		}
		ft_t_base(n, base, ft_strlen(base));
	}
}
