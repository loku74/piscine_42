/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_keys.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:49:23 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/24 18:48:50 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

struct s_variables
{
	int	fd;
	int	ret;
};

int	ft_check_keys(char *file)
{
	char				**ref_keys;
	char				**actual_keys;

	actual_keys = ft_split(ft_check_buffer(file));
	ref_keys = ft_split(ft_check_buffer(file));
	return (1);
}
