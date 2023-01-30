/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:42:13 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/27 14:43:03 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlens(char **strs, int size)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		k += ft_strlen(strs[i]);
		i++;
	}
	return (k);
}

int	secure_malloc(char **str, int size, char **strs, char *sep)
{
	int	nul;

	nul = sizeof(char);
	if (size > 0)
	{
		(*str) = malloc(ft_strlens(strs, size) + (ft_strlen(sep)
					* (size - 1)) + nul);
		if (!(*str))
			return (0);
	}
	else
	{
		(*str) = malloc(nul);
		if (!(*str))
			return (0);
	}
	return (1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_final;
	int		i;
	int		k;
	int		j;

	if (!secure_malloc(&str_final, size, strs, sep))
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		k = 0;
		while (k < ft_strlen(strs[i]))
			str_final[j++] = strs[i][k++];
		k = 0;
		while (sep[k] && i + 1 < size)
			str_final[j++] = sep[k++];
		i++;
	}
	str_final[j] = '\0';
	return (str_final);
}
