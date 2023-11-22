/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:51:38 by razamora          #+#    #+#             */
/*   Updated: 2023/11/22 02:40:21 by razamora         ###   ########.fr       */
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

int	ft_is_prime(int nb)
{
	int	i;
	int	max;

	i = 5;
	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (nb);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	max = ft_sqrt(nb);
	while (i <= max && nb % i == 0)
	{
		i += 2;
		if (i <= max && nb % i == 0)
			return (0);
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb) && nb <= 2147483647)
		nb++;
	return (nb);
}
