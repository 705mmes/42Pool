/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:24:44 by smunio            #+#    #+#             */
/*   Updated: 2022/09/07 17:04:23 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	bool;

	bool = 0;
	i = 0;
	*str = *ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (bool == 0)
			{
				str[i] = str[i] -32;
				bool = 1;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			bool = 1;
		else
			bool = 0;
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{	
	char	c[] = "baTar42c hiEn,fou;s";
	printf("%s", ft_strcapitalize(c));
	return (0);
}*/
