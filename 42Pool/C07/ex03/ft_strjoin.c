/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:08:59 by smunio            #+#    #+#             */
/*   Updated: 2022/09/20 19:43:47 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strs_leng(char **strs, int size)
{
	int	i;
	int	k;
	int	res;

	i = 0;
	k = 0;
	res = 0;
	while (k < size)
	{
		i = 0;
		while (strs[k][i] != '\0')
			i++;
		res = res + i;
		k++;
	}
	return (res);
}

int	ft_sep_leng(char *sep, int size)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i * (size - 1));
}

char	*ft_join(char **strs, char *sep, char *tab, int res)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	while (i < res)
	{
		j = 0;
		while (strs[k][j] != '\0')
			tab[i++] = strs[k][j++];
		j = 0;
		while (sep[j] != '\0' && i < res)
		{
			tab[i] = sep[j];
			i++;
			j++;
		}
		k++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		res;
	char	*tab;

	if (size == 0)
	{
		return (malloc(0));
	}
	res = 0;
	res = ft_strs_leng(strs, size);
	res = res + ft_sep_leng(sep, size);
	tab = (char *)malloc(res + 1 * sizeof(char));
	return (ft_join(strs, sep, tab, res));
}
