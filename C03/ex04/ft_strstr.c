/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:36:53 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/14 09:15:19 by lbourniq         ###   ########lyon.fr   */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	k;
	int	i;
	int	j;

	j = 0;
	i = 0;
	k = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i])
	{
		while (to_find[j])
		{
			if (to_find[j] == str[j + i])
				k++;
			j++;
		}
		j = 0;
		if (ft_strlen(to_find) == k)
			return (&str[i]);
		i++;
		k = 0;
	}
	return ((void *)0);
}
