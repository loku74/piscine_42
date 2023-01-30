/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:20:12 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/28 20:17:38 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	down;
	int	high;

	i = 0;
	down = 0;
	high = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			high++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			down++;
		i++;
	}
	if (down == (length - 1) || high == (length - 1))
		return (1);
	return (0);
}
