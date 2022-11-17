/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:50:40 by smunio            #+#    #+#             */
/*   Updated: 2022/09/22 14:03:38 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		lensrc;
	int		i;

	i = 0;
	lensrc = 0;
	while (src[lensrc])
	{
		lensrc++;
	}
	cpy = malloc(sizeof(char) * lensrc + 1);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int	main(void)
{
	printf("%s", ft_strdup(""));
	printf("%s", strdup(""));
	return (0);
}
