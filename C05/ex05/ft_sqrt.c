/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:24:40 by razamora          #+#    #+#             */
/*   Updated: 2023/11/21 23:16:15 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	total;

	sqrt = 0;
	total = 1;
	while (nb != 0)
	{
		if (nb < 0)
			return (0);
		else
		{
			nb -= total;
			sqrt++;
			total = total + 2;
		}
	}
	return (sqrt);
}
