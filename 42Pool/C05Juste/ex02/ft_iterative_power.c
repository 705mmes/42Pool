/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:33:25 by smunio            #+#    #+#             */
/*   Updated: 2022/09/20 15:59:05 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	r = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		r *= nb;
		i++;
	}
	return (r);
}

int	main(void)
{
	printf("%d", ft_iterative_power(5, 2));
	return (0);
}
