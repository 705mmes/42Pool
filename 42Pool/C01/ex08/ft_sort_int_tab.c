/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:24:57 by smunio            #+#    #+#             */
/*   Updated: 2022/09/08 22:44:16 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include<stdio.h>

//void	swap(int i, int u, int *tab);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	u;
	int	s1;
	int	s;

	s = 0;
	s1 = 0;
	i = 0;
	u = 0;
	while (u < size)
	{
		while (i < size)
		{
			if (tab[i + 1] < tab[i])
			{
				s = tab[i + 1];
				s1 = tab[i];
				tab[i + 1] = s1;
				tab[i] = s;
			}
			i++;
		}
		i = 0;
		u++;
	}
}

/*int	main(void)
{
	int	size = 6;
	int tab[6] = {1, 12, 15, 7, 6, 8};
	ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", tab[i]);
	}
}*/
