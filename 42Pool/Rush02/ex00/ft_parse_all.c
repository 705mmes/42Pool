/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:40:35 by ametzen           #+#    #+#             */
/*   Updated: 2022/09/18 15:44:15 by lloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "ft.h"
#include "parsing.h"
#include <unistd.h>

// return 0 = success
int	ft_parse_all(int argc, char **argv, long *input_number, t_dict **dict)
{
	if (argc == 1)
	{
		if (parsing(dict, "numbers.dict") == -1)
			return (ft_error_dict());
		read_standard_input(dict);
	}
	if (argc == 2)
	{
		if (parsing(dict, "numbers.dict") == -1)
			return (ft_error_dict());
		if (ft_atoi(argv[1]) == -1)
			return (ft_error_generic());
		*input_number = ft_atoi(argv[1]);
		return (0);
	}
	else if (argc == 3)
	{
		if (parsing(dict, argv[1]) == -1)
			return (ft_error_dict());
		if (ft_atoi(argv[2]) == -1)
			return (ft_error_generic());
		*input_number = ft_atoi(argv[2]);
		return (0);
	}
	else
		return (ft_error_argc(argv[0]));
	return (0);
}
