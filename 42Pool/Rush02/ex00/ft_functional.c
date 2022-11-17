/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functional.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:01:51 by lloison           #+#    #+#             */
/*   Updated: 2022/09/18 17:02:24 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

char	*ft_strndup(char *src, int n)
{
	char	*dest;
	int		len;
	int		copy_i;

	len = 0;
	while (src[len])
		len++;
	dest = malloc(sizeof (char) * (n + 1));
	if (dest == NULL)
		return (NULL);
	copy_i = 0;
	while (copy_i < len && copy_i < n)
	{
		dest[copy_i] = src[copy_i];
		copy_i++;
	}
	dest[copy_i] = '\0';
	return (dest);
}

int	check_str(char *str)
{
	int	i;
	int	output;
	int	has_nbr;

	i = 0;
	has_nbr = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+')
		i++;
	output = i;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		else
			has_nbr = 1;
		i++;
	}
	if (has_nbr)
		return (output);
	else
		return (-1);
}

long long	ft_atoi(char *str)
{
	int			i;
	long long	r;

	r = 0;
	i = check_str(str);
	if (i == -1)
		return (-1);
	while (str[i])
	{
		r = r * 10 + str[i] - '0';
		if (r > 4294967295)
			return (-1);
		i++;
	}
	return (r);
}
