/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:32:56 by smunio            #+#    #+#             */
/*   Updated: 2022/11/15 22:06:19 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	result;
	int	nbsigne;

	nbsigne = 1;
	result = 0;
	signe = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				signe *= -1;
			nbsigne++;
		}
		if (nbsigne > 1)
			return (0);
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + str[i] - '0';	
		}
		i++;
	}
	return (result * signe);
}

int main(void)
{
	printf("%d", ft_atoi("    705   "));
	return (0);
}