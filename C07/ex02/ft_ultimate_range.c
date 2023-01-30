/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:38:01 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/25 19:25:21 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		(*range) = malloc(sizeof(NULL));
		if (!(*range))
			return (-1);
		(*range) = NULL;
		return (0);
	}
	(*range) = malloc(sizeof(int *) * (max - min));
	if (!(*range))
		return (0);
	i = 0;
	while (min != max)
		(*range)[i++] = min++;
	return (i);
}
