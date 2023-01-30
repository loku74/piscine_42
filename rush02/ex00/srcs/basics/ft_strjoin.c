/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:23:54 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/24 13:49:11 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_final;
	int		i;
	int		k;
	int		j;

	if (size == 0)
		return ("");
	str_final = malloc(ft_str_lens(strs) + (ft_strlen(sep) * (size - 1)));
	i = 0;
	j = 0;
	while (strs[i])
	{
		k = 0;
		while (strs[i][k])
			str_final[j++] = strs[i][k++];
		k = 0;
		while (sep[k] && strs[i + 1])
			str_final[j++] = sep[k++];
		i++;
	}
	str_final[j] = '\0';
	return (str_final);
}
