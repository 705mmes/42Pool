/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:40:44 by ametzen           #+#    #+#             */
/*   Updated: 2022/09/18 16:42:46 by lloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include"dict.h"
#include"ft.h"

void	filter_eol_in_buf(char *buf);

int	main(int argc, char **argv)
{
	long	input_number;
	t_dict	*dict;

	dict = initialize_dict();
	if (ft_parse_all(argc, argv, &input_number, &dict))
		return (free_dict(&dict));
	ft_write_num(input_number, &dict);
	write(1, "\n", 1);
	return (free_dict(&dict));
}

void	read_standard_input(t_dict **dict)
{
	char			buf[1001];
	long long		nbr;
	
	buf[1000] = '\0';
	while (read(0, buf, 1000))
	{
		filter_eol_in_buf(buf);
		nbr = ft_atoi(buf);
		if (nbr != -1)
			ft_write_num(nbr, dict);
		else
			write(1, "Error", 5);
		write(1, "\n", 1);
	}
}

void	filter_eol_in_buf(char *buf)
{
	int	i;

	i = 0;
	while (buf[i] != '\n')
		i++;
	buf[i] = '\0';
}
