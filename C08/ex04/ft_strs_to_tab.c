/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:23:58 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/27 19:08:20 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!copy)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*s_returned;

	s_returned = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!s_returned)
		return (NULL);
	i = 0;
	while (i < ac && av != 0)
	{
		s_returned[i].size = ft_strlen(av[i]);
		s_returned[i].str = av[i];
		s_returned[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_returned[i].str = 0;
	return (s_returned);
}
