/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:26:25 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/09 14:52:25 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (i < size - 1)
	{
		if (tab[i] > tab[k])
		{
			ft_swap(&tab[i], &tab[k]);
		}
		k++;
		if (k == size)
		{
			i++;
			k = i + 1;
		}
	}
}
