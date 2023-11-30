/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:54:03 by jruf              #+#    #+#             */
/*   Updated: 2023/11/26 22:51:16 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

void	print_one_digit(char *number, char *content_dict)
{
	int i;

	i = 0;
	char *find = ft_strstr(content_dict,number);
	while(*find != 32)
		find++;
	find++;
	while(*find != '\n')
	{
		write(1,find++,1);
		i++;
	}
}

void	print_two_digit(char *number, char *content_dict)
{
	int i = 0;
	char new_number[2] = "";
	if (ft_strstr(content_dict,number))
	{
		char *find = ft_strstr(content_dict,number);
		while(*find != 32)
			find++;
		find++;
		while(*find != '\n')
		{
			write(1,find++,1);
			i++;
		}
	}
	else
	{
  		ft_strncpy(new_number,number,1);
		ft_strcat(new_number, "0");
		print_two_digit(new_number, content_dict);
		write(1," ",1);
		print_one_digit(get_last_char(number),content_dict);
	}
}

void	print_three_digit(char *number, char *content_dict)
{
	int i = 0;
	if (ft_strstr(content_dict,number))
	{
		char *find = ft_strstr(content_dict,number);
		while(*find != 32)
			find++;
		find++;
		while(*find != '\n')
		{
			write(1,find++,1);
			i++;
		}
	}
}

void	process_dict (char *content_dict, char *number, int len)
{
	if(len == 1)
		print_one_digit(number, content_dict);
	else if(len == 2)
		print_two_digit(number, content_dict);
	else if(len == 3)
		print_three_digit(number, content_dict);
}

int 	process_file(char *number,char *file, int size)
{
	char    *content_dict;
  	int 	count;
	char 	r;	
	char	a;
	
  	count = 0;
	int i = 0;

	int f = open(file, O_RDONLY);
	if (f < 0)
	{
		write(1, "Dict Error\n",11);
		return (-1);
	}
	while((r = read(f, &a, 1)) > 0)
	{ 
		count++;
		if (r < 0)
			write(1, "Dict Error\n", 11);
	}
	close(f);
	f = open(file, O_RDONLY);
	if (f < 0)
	{
		write(1,"Dict Error\n",11);
		return (-1);
	}
	content_dict = (char *)malloc(sizeof(char) * count + 1);
	i = 0;
	while((r = read(f, &a, 1)) > 0)
	{
		count++;
		if (r < 0)
			write(1,"Dict Error\n",11);
		content_dict[i] = a;
		i++;
	} 
	process_dict (content_dict,number,size);
	free(content_dict);
	return (1);
}
