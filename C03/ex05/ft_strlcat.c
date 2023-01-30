/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:14:02 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/14 09:33:42 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	len_base;

	k = 0;
	i = ft_strlen(dest);
	len_base = i;
	if (len_base >= size)
		return (size + ft_strlen(src));
	while (size > i + 1 && src[k])
		dest[i++] = src[k++];
	dest[i] = '\0';
	return (len_base + ft_strlen(src));
}
