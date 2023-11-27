/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:32:36 by razamora          #+#    #+#             */
/*   Updated: 2023/11/27 11:44:55 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*buffer;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	buffer = (int *) malloc(sizeof (int) * size);
	if (!buffer)
		return (0);
	while (i < size)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}
