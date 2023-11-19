/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:48:36 by razamora          #+#    #+#             */
/*   Updated: 2023/11/19 16:07:57 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i] && i < n)
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
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

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	c;
	int		len_src;
	int		len_to_find;

	i = 0;
	len_src = ft_strlen(str);
	len_to_find = ft_strlen(to_find);
	c = to_find[0];
	if (len_to_find > len_src)
		return (0);
	else if (len_to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			if (ft_strncmp(&str[i], to_find, len_to_find) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
