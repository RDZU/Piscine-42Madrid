/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:43:24 by razamora          #+#    #+#             */
/*   Updated: 2023/11/16 15:22:07 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if ((str[i - 1] >= 32 && str[i - 1] <= 47) || i == 0)
				str[i] -= 32;
			else if (str[i - 1] >= 58 && str[i - 1] <= 64)
				str[i] -= 32;
			else if (str[i - 1] >= 91 && str[i - 1] <= 96)
				str[i] -= 32;
			else if (str[i - 1] >= 123 && str[i - 1] <= 126)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
