/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:03:47 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/28 09:19:10 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	check_base(char *base);

void	ft_strrev(char *str, int sign, char *base_to)
{
	int		i;
	char	temp;
	int		k;

	if (!str[0])
	{
		str[0] = base_to[0];
		str[1] = '\0';
		return ;
	}
	i = 0;
	k = 0;
	if (sign)
		k = 1;
	while (ft_strlen(str) / 2 > i)
	{
		temp = str[i + k];
		str[i + k] = str[ft_strlen(str) - i - 1];
		str[ft_strlen(str) - i - 1] = temp;
		i++;
	}
}

int	ft_sizenum(long n)
{
	int	i;

	i = 1;
	while (0 < n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(long n, char *base_to)
{
	char	*number;
	int		i;
	int		sign;

	sign = 0;
	i = 0;
	if (n < 0)
		sign = 1;
	number = malloc(sizeof(char) * (ft_sizenum(n) + sign + 1));
	if (!number)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		number[i] = '-';
		i++;
	}
	while (n > 0)
	{
		number[i++] = base_to[(n % ft_strlen(base_to))];
		n /= ft_strlen(base_to);
	}
	number[i] = '\0';
	ft_strrev(number, sign, base_to);
	return (number);
}
