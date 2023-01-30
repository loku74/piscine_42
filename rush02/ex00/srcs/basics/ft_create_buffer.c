/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:06:23 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/24 18:34:40 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include "ft.h"

char	*ft_create_buffer(char *file)
{
	int		fd;
	int		ret;
	char	*buf;
	int		file_size;

	file_size = ft_get_buffer_size(file);
	if (!file_size)
		return ((char *)0);
	buf = malloc(file_size + 1);
	if (!buf)
		return ((char *)0);
	fd = open(file, O_RDONLY);
	ret = read(fd, buf, file_size);
	if (fd == -1 || ret == -1)
		return ((char *)0);
	buf[file_size] = '\0';
	return (buf);
}
