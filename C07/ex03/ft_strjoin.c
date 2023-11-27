/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:41:53 by razamora          #+#    #+#             */
/*   Updated: 2023/11/27 14:11:08 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	calculate_size_strjoin(int size, char **strs, char *sep)
{
	int	size_sep;
	int	size_str;
	int	i;
	int	size_total;

	size_str = 0;
	i = 0;
	size_sep = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		size_str += ft_strlen(strs[i]);
		i++;
	}
	size_total = size_str + size_sep;
	return (size_total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	char	*new;
	int		size_total;

	size_total = calculate_size_strjoin(size, strs, sep);
	new = (char *)malloc(sizeof(char) * (size_total) + 1);
	if (!new)
		return (0);
	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			new[x++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			new[x++] = sep[j++];
		i++;
	}
	new[x] = '\0';
	return (new);
}
