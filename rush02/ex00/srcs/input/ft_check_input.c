/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:35:19 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/24 18:31:58 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_check_input(int argc, char **argv)
{
	if (argc > 3 || argc < 2)
	{
		ft_putstr("3 2\n");
		ft_display_error();
		return (0);
	}
	if (argc == 2)
	{
		if (!ft_is_numeric(argv[1]))
		{
			ft_putstr("2\n");
			ft_display_error();
			return (0);
		}
	}
	else
	{
		if (!ft_is_numeric(argv[2]))
		{
			ft_putstr("else\n");
			ft_display_error();
			return (0);
		}
	}
	return (1);
}
