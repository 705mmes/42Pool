/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:32:50 by smunio            #+#    #+#             */
/*   Updated: 2022/09/10 16:48:10 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	while (str[i])
	{
		if (r != 0)
		{
			if ((str[i] >= '0') && (str[i] <= '9'))
			{
				r = 1;
			}
			else
			{
				return (0);
			}
			i++;
		}
	}
	return (r);
}

/*int	main(void)
{
	printf("%d", ft_str_is_numeric("4a5"));
	return (0);
}*/
