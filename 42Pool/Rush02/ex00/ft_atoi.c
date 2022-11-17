/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:03:16 by smunio            #+#    #+#             */
/*   Updated: 2022/09/18 17:02:01 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long long	ft_conditions(char *str, int *i)
{
	int	signe;

	*i = 0;
	signe = 0;
	while (str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n'
		|| str[*i] == '\v' || str[*i] == '\f' || str[*i] == '\r')
			*i = *i + 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			return (-1);
		while (str[*i] == '+')
		{
			signe++;
			if (signe > 1)
				return (-1);
			*i = *i + 1;
		}
	}
	return (0);
}

int	check_str(char *str)
{
	int	i;
	int output;

	i = 0;
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
		i++;
	}
	return (output);
}

long long	ft_atoi(char *str)
{
	int			i;
	long long	r;

	i = check_str(str);
	if (i == -1)
		return (-1);
	while (str[i])
	{
		r *= 10 + str[i] - '0';
		i++;
	}
	return (r);
}

int main(void)
{
	printf("%lld", ft_atoi("   +705 +"));
	return (0);
}
