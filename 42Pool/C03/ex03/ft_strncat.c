/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:27:37 by smunio            #+#    #+#             */
/*   Updated: 2022/09/10 11:07:10 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int					i;
	unsigned int		x;

	x = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[x] && x < nb)
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
	printf("%s", ft_strncat(dest, src, 4));
	return (0);
}
*/