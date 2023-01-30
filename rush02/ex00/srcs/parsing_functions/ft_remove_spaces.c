/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_space.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:13:02 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/24 14:47:15 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"
#include <stdio.h>

char	*ft_remove_spaces(char *str)
{
	int		i;
	int		j;
	char	*rstr;

	i = 0;
	j = 0;
	rstr = malloc(ft_strlen(str));
	rstr = ft_strjoin(ft_strlen(str), ft_split(str, " \f\t\v\r"), " ");
	return (rstr);
}
