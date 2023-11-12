/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siglesia <siglesia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:02:11 by siglesia          #+#    #+#             */
/*   Updated: 2023/11/12 20:02:36 by siglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_rush(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || (i == y && j == x && y > 1 && x > 1))
		ft_putchar('A');
	else if ((i == 1 && j == x) || (i == y && j == 1))
		ft_putchar('C');
	else if (i == 1 || j == 1 || i == y || j == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
		write(2, "Error", 5);
	else
	{
		while (++i <= y)
		{
			j = 0;
			while (++j <= x)
			{
				ft_print_rush(x, y, i, j);
			}
			ft_putchar('\n');
		}
	}
}
