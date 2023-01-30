/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:08:34 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/10 18:32:53 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

int	ft_char_is_uppercase(char c)
{
	if (c < 65 || c > 90)
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_uppercase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

int	ft_char_is_alpha(char c)
{
	if (c < 65 || (c > 90 && c < 97) || c > 122)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] > 96 && str[0] < 123)
		str[0] -= 32;
	while (str[i])
	{
		if (ft_char_is_alpha(str[i]) && !ft_char_is_numeric(str[i - 1]))
		{
			if (!ft_char_is_alpha(str[i - 1]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
