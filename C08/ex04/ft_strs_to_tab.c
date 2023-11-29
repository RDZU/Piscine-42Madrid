/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:34:40 by razamora          #+#    #+#             */
/*   Updated: 2023/11/28 22:55:54 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


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

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new)
		return (0);
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*new_struct;
	int			i;

	i = 0;
	new_struct = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!new_struct)
		return (0);
	while (i < ac)
	{
		new_struct[i].size = ft_strlen(av[i]);
		new_struct[i].str = av[i];
		new_struct[i].copy = ft_strdup(av[i]);
		i++;
	}
	new_struct[i].size = 0;
	new_struct[i].str = NULL;
	new_struct[i].copy = NULL;
	return (new_struct);
}
