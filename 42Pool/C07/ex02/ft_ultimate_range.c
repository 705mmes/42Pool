/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:44:48 by smunio            #+#    #+#             */
/*   Updated: 2022/09/20 20:41:18 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*tab;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (len);
}

/*int	main(void)
{
	int	*list;

	int size = ft_ultimate_range(&list, 5, 20);
	for (int i = 0; i < size; i++)
		printf("%d\n", list[i]);

	return (0);
}*/