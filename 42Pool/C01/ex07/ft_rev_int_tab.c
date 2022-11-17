/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:56:54 by smunio            #+#    #+#             */
/*   Updated: 2022/09/10 11:02:51 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	sto;

	i = 0;
	sto = 0;
	while (i < size / 2)
	{
		sto = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i -1] = sto;
		i++;
	}
}

/*int	main(void)
{
	int tableau[6] = {1, 8, 35, 705, 45, 42};
	
	ft_rev_int_tab(tableau, 6);
}*/
