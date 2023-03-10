/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 08:27:00 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/13 08:39:16 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[k])
	{
				dest[i + k] = src[k];
				k++;
	}
	dest[i + k] = '\0';
	return (dest);
}
