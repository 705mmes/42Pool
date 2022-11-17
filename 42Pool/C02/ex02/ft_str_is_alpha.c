/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:50:03 by smunio            #+#    #+#             */
/*   Updated: 2022/09/07 11:16:40 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	r;

	r = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			r = 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			r = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (r);
}

/*int main()
{
    ft_str_is_alpha("Bon/jour");
    return (0);
}*/