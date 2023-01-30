/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:47:07 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/28 15:08:04 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*rtab;

	rtab = malloc(length * sizeof(int));
	if (rtab == NULL)
		return ((int *)0);
	i = 0;
	while (i < length)
	{
		rtab[i] = (*f)(tab[i]);
		i++;
	}
	return (rtab);
}
