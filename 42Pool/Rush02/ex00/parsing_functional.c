/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_functional.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:10:05 by lloison           #+#    #+#             */
/*   Updated: 2022/09/18 13:16:50 by lloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "parsing.h"

long long	get_number(char *buf)
{
	long long	nb;
	int			i;

	i = 0;
	nb = -1;
	while (buf[i] >= '0' && buf[i] <= '9')
	{
		if (i == 0)
			nb = buf[i] - '0';
		else
			nb = (nb * 10) + buf[i] - '0';
		i++;
		if (nb > 4294967295)
			return (-1);
	}
	return (nb);
}

char	*get_name(char *buf)
{
	int		i;

	i = 0;
	while (buf[i] && buf[i] != ':')
		i++;
	i++;
	while (buf[i] && buf[i] == ' ')
		i++;
	if (buf[i] >= 33 && buf[i] <= 126)
		return (&buf[i]);
	return (0);
}

int	get_corresponding_index(long long nb)
{
	if (nb <= 20)
		return ((int) nb);
	if (nb == 30)
		return (THIRTY);
	if (nb == 40)
		return (FORTY);
	if (nb == 50)
		return (FIFTY);
	if (nb == 60)
		return (SIXTY);
	if (nb == 70)
		return (SEVENTY);
	if (nb == 80)
		return (EIGHTY);
	if (nb == 90)
		return (NINETY);
	if (nb == 100)
		return (HUNDRED);
	if (nb == 1000)
		return (THOUSAND);
	if (nb == 1000000)
		return (MILLION);
	if (nb == 1000000000)
		return (BILLION);
	return (-1);
}
