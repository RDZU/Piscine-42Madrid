/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:09:41 by razamora          #+#    #+#             */
/*   Updated: 2023/11/23 17:58:48 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc == 1)
	{
		while (argv[0][j] != '\0')
		{
			write(1, &argv[0][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
	return (0);
}