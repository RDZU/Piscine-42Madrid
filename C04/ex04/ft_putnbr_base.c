/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:38:39 by razamora          #+#    #+#             */
/*   Updated: 2023/11/30 07:37:53 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

int	ft_validate_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[0] == '\0')
			return (0);
		if (base[i] == 43 || base[i] == 45)
			return (0);
		i++;
	}
	return (1);
}

int	ft_doble_char(char *str)
{
	int i;
	int	j;
	
	i = 0;
	while(i < strlen(str))
	{
		j = i + 1;
		while(j < strlen(str))
		{
		  	if(str[i] == str[j])
				return (1);
		  	j++;
		}
		i++;
	  }
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	size;

	size = ft_strlen(base);
	i = 0;
	if (ft_validate_base(base) == 1 && size > 1 && ft_doble_char(base) == 0)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_base(-nbr, base);
		}
		else if (nbr < size)
		{
			ft_putchar(base[nbr % size]);
		}
		else if (nbr >= size)
		{
			ft_putnbr_base(nbr / size, base);
			ft_putchar(base[nbr % size]);
		}
	}
}
