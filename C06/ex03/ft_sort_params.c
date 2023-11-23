/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:28:50 by razamora          #+#    #+#             */
/*   Updated: 2023/11/23 17:47:30 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*aux;

	aux = *b;
	*b = *a;
	*a = aux;
}

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_paramenter(int argc, char **argv)
{
	int	j;
	int	i;

	j = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		j;
	int		i;
	char	*aux;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			j = 0;
			while (j < argc - 1)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				{
					ft_swap(&argv[j], &argv[j + 1]);
				}
				j++;
			}
			i++;
		}
	}
	ft_print_paramenter(argc, argv);
	return (0);
}
