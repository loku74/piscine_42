/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdechele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:23:38 by tdechele          #+#    #+#             */
/*   Updated: 2022/07/10 17:23:41 by tdechele         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char fchar, char mchar, char lchar)
{
	int	cx;

	cx = 1;
	while (cx <= x)
	{
		if (cx == 1)
			ft_putchar(fchar);
		else if (cx > 0 && cx < x)
			ft_putchar(mchar);
		else if (cx == x)
			ft_putchar(lchar);
		cx++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	cy;

	cy = 1;
	while (cy <= y)
	{
		if (cy == 1)
			print_line(x, 'A', 'B', 'C');
		else if (cy > 1 && cy < y)
			print_line(x, 'B', ' ', 'B');
		else if (cy == y)
			print_line(x, 'A', 'B', 'C');
		cy++;
	}
}
