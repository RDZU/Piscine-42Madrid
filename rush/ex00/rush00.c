/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siglesia <siglesia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:55:46 by siglesia          #+#    #+#             */
/*   Updated: 2023/11/12 19:56:27 by siglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_rush(int x, int y, int i, int j)
{
	if ((i == 1 && j == 1) || (i == y && j == x))
		ft_putchar('o');
	else if ((i == 1 && j == x) || (i == y && j == 1))
		ft_putchar('o');
	else if (i == 1 || i == y)
		ft_putchar('-');
	else if (j == 1 || j == x)
		ft_putchar('|');
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
		write(1, "Error se ha recibido algun parametro incorrecto!", 48);
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
