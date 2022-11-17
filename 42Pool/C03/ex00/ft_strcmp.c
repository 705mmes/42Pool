/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:52:56 by smunio            #+#    #+#             */
/*   Updated: 2022/09/13 16:02:07 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	int				r;

	r = 0;
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			return (r);
		}
		i++;
	}
	return (r);
}

/*int	main(void)
{
	printf("%d\n", ft_strcmp("GudGuy", "VeryGudGuy"));
	printf("%d", strcmp("GudGuy", "VeryGudGuy"));
	return (0);
}
*/