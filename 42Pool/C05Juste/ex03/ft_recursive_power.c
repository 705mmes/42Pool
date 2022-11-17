/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:50:45 by smunio            #+#    #+#             */
/*   Updated: 2022/09/18 21:06:24 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = 1;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || (power == 0))
		return (1);
	if (power == 1)
		return (nb);
	return (n = nb * ft_recursive_power(nb, power - 1));
}

/*int main(void)
{
    printf("%d", ft_recursive_power(5, 2));
    return (0);
}
*/