/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nul_chars.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:07:53 by lbourniq          #+#    #+#             */
/*   Updated: 2022/07/24 13:33:48 by lbourniq         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_nul_chars(char *str, char *charset)
{
	int		i;
	char	*rstr;

	i = 0;
	rstr = ft_strdup(str);
	while (rstr[i])
	{
		if (ft_is_char_in_str(rstr[i], charset))
			rstr[i] = '\0';
		i++;
	}
	return (rstr);
}
