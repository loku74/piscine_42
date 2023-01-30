/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_buffer_size.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:05:30 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/24 17:57:36 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "ft.h"

int	ft_get_buffer_size(char *file)
{
	int		size;
	int		fd;
	char	buffer;

	size = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_display_error();
		return (0);
	}
	while (read(fd, &buffer, 1) > 0)
		size++;
	close(fd);
	return (size);
}
