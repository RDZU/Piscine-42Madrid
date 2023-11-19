/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:24:17 by razamora          #+#    #+#             */
/*   Updated: 2023/11/19 16:54:09 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = ft_strlen(src);
	j = ft_strlen(dest);
	if (size == 0 || size < j)
		return (size + i);
	i = 0;
	k = j;
	while (src[i] != '\0' && i < size - 1)
	{
		if (j + i < size - 1)
		{
			dest[i + j] = src[i];
			k++;
		}
		i++;
	}
	dest[k] = '\0';
	return (i + j);
}
