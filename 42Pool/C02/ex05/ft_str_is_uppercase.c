/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:11:45 by smunio            #+#    #+#             */
/*   Updated: 2022/09/10 10:37:22 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	while (str[i])
	{
		if (r != 0)
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
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
	printf("%d", ft_str_is_uppercase("GuG"));
	return (0);
}*/
