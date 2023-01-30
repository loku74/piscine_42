/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:30:52 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/28 09:19:04 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa_base(long n, char *base_to);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
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

int	check_char_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	get_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	long	result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	if (!check_base(base_from) || !check_base(base_to))
		return (0);
	while (nbr[i] == 32 || (nbr[i] < 14 && nbr[i] > 8))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nbr[i] && check_char_in_base(nbr[i], base_from))
	{
		result = (result * ft_strlen(base_from)) + get_char(nbr[i], base_from);
		i++;
	}
	return (ft_itoa_base(result * sign, base_to));
}
