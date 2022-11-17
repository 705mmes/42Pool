/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:06:55 by smunio            #+#    #+#             */
/*   Updated: 2022/09/20 15:50:47 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	r;
	int	z;

	z = 1;
	r = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1 || (nb >= 13))
		return (1);
	while (r <= nb)
	{
		z = z * r;
		r++;
	}
	return (z);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}
