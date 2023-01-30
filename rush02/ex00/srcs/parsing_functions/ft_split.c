/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:08:32 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/24 16:50:26 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

char	**ft_split(char *str, char *charset)
{
	char	*copy;
	char	**tab;
	int		i;
	int		j;

	tab = malloc((sizeof(char *) * ft_strlen(str)) + 1);
	if (tab == NULL)
		return ((char **)0);
	copy = ft_nul_chars(str, charset);
	i = 0;
	j = 0;
	while (i < ft_strlen(str))
	{
		if (copy[i])
		{
			tab[j] = &copy[i];
			j++;
			i += ft_strlen(&copy[i]) + 1;
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}
