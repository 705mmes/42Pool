/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:21:05 by smunio            #+#    #+#             */
/*   Updated: 2022/09/10 11:07:22 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		x;

	x = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[x])
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[50] = "Very";
	char	src[] = "GudGuy";
	printf("%s", ft_strcat(dest, src));
	return (0);
}
*/