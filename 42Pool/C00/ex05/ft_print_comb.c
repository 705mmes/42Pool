/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 12:31:36 by smunio            #+#    #+#             */
/*   Updated: 2022/09/04 15:15:41 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void);
void	affiche(int a, int b, int c);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a < 58)
	{
		b = a;
		while (b < 58)
		{
			c = b;
			while (c < 58)
			{
				affiche(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	affiche(int a, int b, int c)
{
	if (a != b && a != c && b != c)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != 55)
		{
			write (1, ", ", 2);
		}
	}
}
