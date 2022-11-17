/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 14:31:51 by smunio            #+#    #+#             */
/*   Updated: 2022/09/07 22:38:59 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

unsigned int	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i <= size)
	{
		dest[i] = src[i];
		if (i == size)
			dest[(i - size) + sizeof(*src)] = '\0';
		i++;
	}
	
	return (sizeof(src));
}

int	main(void)
{
	char	dest[0];

	printf("%d", *ft_strlcpy(&dest, "GudGuy", 15));
	return (0);
}
