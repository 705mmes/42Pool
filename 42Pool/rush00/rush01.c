/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:24:58 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/04 10:35:32 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	_ope2(int x, int y, int nx, int ny)
{
	if (ny == 0 && nx == 0 || ny == y - 1 && nx == x - 1)
	{
		ft_putchar('/');
		nx++;
	}
	else if (ny == y - 1 && nx == 0 || ny == 0 && nx == x - 1)
	{
		ft_putchar('\\');
		nx++;
	}
	else if (nx > 0 && ny > 0 && nx < x - 1 && ny < y - 1)
	{
		ft_putchar(' ');
		nx++;
	}
	else
	{
		ft_putchar('*');
		nx++;
	}
	return (nx);
}

void	_ope(int x, int y, int nx, int ny)
{
	while (ny < y)
	{
		nx = 0;
		while (nx < x)
		{
			nx = _ope2(x, y, nx, ny);
		}
		ft_putchar('\n');
		ny++;
	}
}

void	ft_rush(int x, int y)
{
	int	ny;
	int	nx;

	ny = 0;
	_ope(x, y, nx, ny);
}
