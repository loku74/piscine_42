/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:13:52 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/24 14:46:31 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

char	***ft_big_split(char **tab, int lines)
{
	char	***final_tab;
	char	*str;
	int		i;

	i = 0;
	final_tab = malloc(ft_str_lens(tab) + 1);
	while (i < lines)
	{
		str = ft_remove_spaces(tab[i]);
		final_tab[i] = ft_split(str, ":");
		i++;
	}
	final_tab[i] = (char **)0;
	return (final_tab);
}
