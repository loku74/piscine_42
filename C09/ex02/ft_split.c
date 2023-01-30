/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 07:52:52 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/28 11:07:56 by lbourniq         ###   ########lyon.fr   */
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

int	isin_str(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	if (!*str)
		return (0);
	while (isin_str(str[i], charset))
		i++;
	if (i == ft_strlen(str))
		return (1);
	words = 1;
	while (i < ft_strlen(str) - 1)
	{
		if (isin_str(str[i], charset) && !isin_str(str[i + 1], charset))
			words++;
		i++;
	}
	return (words);
}

int	next_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (isin_str(str[i], charset))
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	tab = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!tab)
		return (NULL);
	while (++i < ft_strlen(str))
	{
		if (next_sep(&str[i], charset))
		{
			k = 0;
			tab[j] = malloc((sizeof(char) * next_sep(&str[i], charset)) + 1);
			if (!tab[j])
				return (NULL);
			while (next_sep(&str[i], charset))
				tab[j][k++] = str[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}
