/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:00:08 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/28 17:21:48 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(char **tab, int length, int (*f)(char *, char *))
{
	int	i;
	int	down;
	int	high;

	i = 0;
	down = 0;
	high = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			high++;
		else
			down++;
		i++;
	}
	if (down == (length - 1) || high == (length - 1))
		return (1);
	return (0);
}

int	len_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*temp;

	while (!(ft_is_sort(tab, len_tab(tab), cmp)))
	{
		i = 0;
		while (tab[i])
		{
			j = i + 1;
			while (tab[j])
			{
				if ((*cmp)(tab[i], tab[j]) > 0)
				{
					temp = tab[i];
					tab[i] = tab[j];
					tab[j] = temp;
				}
				j++;
			}
			i++;
		}
	}
}
