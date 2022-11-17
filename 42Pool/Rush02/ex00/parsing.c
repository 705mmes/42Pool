/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:40:05 by lloison           #+#    #+#             */
/*   Updated: 2022/09/18 14:53:56 by lloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "parsing.h"
#include "ft.h"
#include <fcntl.h>
#include <unistd.h>

int	parsing(t_dict **dict, char *filename)
{
	int		fd;
	char	buf[1000];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (get_next_line(fd, buf))
	{
		if (parse_line(buf, dict) == -1)
			return (-1);
	}
	return (is_dict_valid(dict));
}

int	get_next_line(int fd, char *buf)
{
	char	c;
	int		i;

	i = 0;
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			buf[i] = '\0';
			return (1);
		}
		buf[i] = c;
		i++;
	}
	buf[i] = '\0';
	return (0);
}

int	parse_line(char *buf, t_dict **dict)
{
	long long	nb;
	char		*value;
	int			index;

	nb = get_number(buf);
	value = get_name(buf);
	index = get_corresponding_index(nb);
	if (index != -1 && value != 0)
	{
		if ((*dict)->dict[index] != 0)
			return (-1);
		(*dict)->dict[index] = ft_strndup(value, special_strlen(value));
		return (0);
	}
	return (0);
}
