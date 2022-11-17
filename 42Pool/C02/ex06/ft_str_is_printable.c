/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:17:37 by smunio            #+#    #+#             */
/*   Updated: 2022/09/12 15:37:09 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	while (str[i])
	{
		if (r != 0)
		{
			if (str[i] >= 32 && str[i] <= 126)
			{
				r = 1;
			}
			else
			{
				return (0);
			}
		}
		i++;
	}
	return (r);
}

/*int	main(void)
{
	printf("%d", ft_str_is_printable("~"));
	return (0);
}*/
