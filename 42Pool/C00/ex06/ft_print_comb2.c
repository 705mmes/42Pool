/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:45:11 by smunio            #+#    #+#             */
/*   Updated: 2022/09/21 17:23:04 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	digit(int a, int b, int c, int d);
void	affiche(int a, int b, int c, int d);

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 48;
	d = 49;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{	
			c = 48;
			digit(a, b, c, d);
			b++;
		}
		a++;
	}
}

void	digit(int a, int b, int c, int d)
{
	while (c < 58)
	{
		d = 48;
		while (d < 58)
		{
			affiche(a, b, c, d);
			d++;
		}
		c++;
	}
}

void	affiche(int a, int b, int c, int d)
{
	if (a < c || (a == c && b < d))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (a != '9' || b != '8' || c != '9' || d != '9')
		{
			write(1, ", ", 2);
		}
	}
}
int	main()
{
	ft_print_comb2();
	return (0);
}
