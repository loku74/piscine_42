/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:15:35 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/15 13:04:41 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*nom;
	int		i;

	nom = argv[0];
	i = 0;
	while (nom[i])
		write(1, &nom[i++], 1);
	write(1, "\n", 1);
	(void) argc;
	return (0);
}
