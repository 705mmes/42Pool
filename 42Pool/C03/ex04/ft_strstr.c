/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:39:45 by smunio            #+#    #+#             */
/*   Updated: 2022/09/09 12:50:17 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<string.h>
//#include<stdio.h>

char	*ft_strstr(char *str, char	*to_find)
{
	int	i;
	int	u;

	u = 0;
	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[u])
		{
			u++;
			if (to_find[u] == '\0')
			{
				str = &str[i - u + 1];
				return (str);
			}
		}
		else if (str[u] != '\0')
			u = 0;
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "VeGurdGudGuy";
	char	find[20] = "Gud";
	
	printf("%s", ft_strstr(str, find));
	//printf("%s", strstr(str, find));
	return (0);
}
*/