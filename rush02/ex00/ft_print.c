/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avaganay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:44:59 by avaganay          #+#    #+#             */
/*   Updated: 2022/07/24 18:54:41 by lbourniq         ###   ########lyon.fr   */
/*   Updated: 2022/07/24 18:51:29 by mfettah-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_search(char *nb, char ***tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (ft_strcmp(nb, tab[i][0]) == 0)
			ft_putstr(tab[i][1]);
		i++;
	}
	ft_putchar(' ');
}

void	test_hundred(char n, char ***tab)
{
	if (n != '0')
	{
		ft_print_search("100", tab);
	}
}

void	find_left_right(char n, char ***tab, int space)
{
	int		i;
	char	n_array[2];

	i = 0;
	n_array[0] = n;
	n_array[1] = '\0';
	while (tab[i])
	{
		if (n_array[0] == tab[0][0][0])
			return ;
		if (n_array[0] == tab[i][0][0])
		{
			ft_putstr(tab[i][1]);
			if (space == 0)
				ft_putchar(' ');
			return ;
		}
		i++;
	}		
}

void	find_center(char n, char next, char ***tab)
{
	int		i;
	char	ten[3];
	char	ty[3];
	char	n_array[2];

	i = 0;
	n_array[0] = n;
	n_array[1] = '\0';
	while (tab[i])
	{
		if (n_array[0] == tab[0][0][0])
			return ;
		if (n_array[0] == '1')
		{
			ten[0] = n;
			ten[1] = next;
			ten[2] = '\0';
			while (tab[i])
			{
				if (ft_strcmp(ten, tab[i][0]) == 0)
				{
					ft_putstr(tab[i][1]);
					ft_putchar(' ');
					return ;
				}	
				i++;
			}
		}
		if (n_array[0] >= '2' && n_array[0] <= '9')
		{
			ty[0] = n;
			ty[1] = '0';
			ty[2] = '\0';
			while (tab[i])
			{
				if (ft_strcmp(ty, tab[i][0]) == 0)
				{
					ft_putstr(tab[i][1]);
					ft_putchar(' ');
					return ;
				}	
				i++;
			}	
		}
		i++;
	}		
}

void	find_mille(int i, char ***tab)
{
	int		index_mille;

	index_mille = i / 3;
	if (index_mille == 1)
		ft_print_search("1000", tab);
	if (index_mille == 2)
		ft_print_search("1000000", tab);
	if (index_mille == 3)
		ft_print_search("1000000000", tab);
	if (index_mille == 4)
		ft_print_search("1000000000000", tab);
	if (index_mille == 5)
		ft_print_search("1000000000000000", tab);
	if (index_mille == 6)
		ft_print_search("1000000000000000000", tab);
	if (index_mille == 7)
		ft_print_search("1000000000000000000000", tab);
	if (index_mille == 8)
		ft_print_search("1000000000000000000000000", tab);
	if (index_mille == 9)
		ft_print_search("1000000000000000000000000000", tab);
	if (index_mille == 10)
		ft_print_search("1000000000000000000000000000000", tab);
	if (index_mille == 11)
		ft_print_search("1000000000000000000000000000000000", tab);
	if (index_mille == 10)
		ft_print_search("1000000000000000000000000000000000000", tab);
	if (index_mille == 11)
		ft_print_search("1000000000000000000000000000000000000000", tab);
}

void	ft_print(char *nb, char ***tab)
{
	int	i;
	int	j;
	int	index;
	int	ten;
	int	space;

	i = ft_strlen(nb);
	j = 0;
	ten = 0;
	space = 0;
	if (ft_strcmp(nb, "0") == 0)
		return (ft_print_search("0", tab));
	if (ft_strcmp(nb, "10000") == 0)
		return (ft_print_search("10000", tab));
	while (i > 0 && j < ft_strlen(nb))
	{
		index = i % 3;
		if (index == 0)
		{
			find_left_right(nb[j], tab, space);
			test_hundred(nb[j], tab);
			i--;
			j++;
		}
		else if (index == 2)
		{
			find_center(nb[j], nb[j + 1], tab);
			if (nb[j] == '1')
				ten = 1;
			i--;
			j++;
		}
		else if (index == 1)
		{
			if (i == 0)
				space = 1;
			if (ten == 0)
				find_left_right(nb[j], tab, space);
			ten = 0;
			if (nb[j] != '0')
				find_mille(i, tab);
			i--;
			j++;
		}
	}
}
