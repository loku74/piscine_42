/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:40:36 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/15 12:30:58 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	index;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	index = nb;
	while (index != 1)
	{
		nb = nb * (index - 1);
		index--;
	}
	return (nb);
}
