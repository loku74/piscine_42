/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:33:57 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/24 18:44:34 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "ft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char				*buf;
	char				*file;
	char				***tabb;
	char				**tab;

	if (ft_check_input(argc, argv))
	{
		if (argc == 3)
			file = argv[1];
		else
			file = "ref.dict";
		buf = ft_create_buffer(file);
		if (!buf)
			return (0);
		tab = ft_split(buf, "\n");
		tabb = ft_big_split(tab, 41);
		if (argc == 3)
			ft_print(argv[2], tabb);
		else
			ft_print(argv[1], tabb);
	}
	return (0);
}
