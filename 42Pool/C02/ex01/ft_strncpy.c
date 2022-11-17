/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:24:08 by smunio            #+#    #+#             */
/*   Updated: 2022/09/11 16:47:41 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>
//#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "MegaGudGuy";
	char	dest2[20] = "MegaGudGuy";
	
	printf("%s\n", ft_strncpy(dest, "GudGuy", 9));
	printf("%s", strncpy(dest2, "GudGuy", 3));
	return	(0);
}*/
