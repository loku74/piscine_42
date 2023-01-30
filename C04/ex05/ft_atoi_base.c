/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:11:44 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/14 09:45:54 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
		else if (base[i] == '+' || base [i] == '-')
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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	if (!check_base(base))
		return (0);
	while (str[i] == 32 || (str[i] < 14 && str[i] > 8))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && check_char_in_base(str[i], base))
	{
		result = (result * ft_strlen(base)) + get_char(str[i], base);
		i++;
	}
	return (result * sign);
}
