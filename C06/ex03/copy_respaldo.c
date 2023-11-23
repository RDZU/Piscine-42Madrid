/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:28:50 by razamora          #+#    #+#             */
/*   Updated: 2023/11/22 16:04:17 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int contar_argumentos_vacios(int argc, char **argv) {
  int i;
  int contador = 0;

  for (i = 1; i < argc; i++) {
    if (argv[i][0] == '\0') {
      contador++;
    }
  }

  return contador;
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
	int cont = 0;
	i = 1;
	 int cantidad_argumentos_vacios;

  cantidad_argumentos_vacios = contar_argumentos_vacios(argc, argv);

  printf("La cantidad de argumentos vacíos es: %d\n", cantidad_argumentos_vacios);
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			
			j = 0;
			if(argv[i][0] == '\0')
				cont++;
			while (j < argc - 1)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				{
					aux = argv[j + 1];
					argv[j + 1] = argv[j];
					argv[j] = aux;
				}
				j++;
			}
			i++;
		}
	}
	printf("%d",cont);
	ft_print_paramenter(argc, argv);
	return (0);
}