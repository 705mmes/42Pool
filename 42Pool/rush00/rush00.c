/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:24:58 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/04 13:41:50 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	display(char c, int *ptr)
{
	ft_putchar(c);
	*ptr = *ptr + 1;
}

int	_ope2(int x, int y, int nx, int ny)
{
	if (ny == 0 && nx == 0 || ny == y - 1 && nx == x - 1)
	{
		display('o', &nx);
	}
	else if (ny == y - 1 && nx == 0 || ny == 0 && nx == x - 1)
	{
		display('o', &nx);
	}
	else if (nx == 0 && ny < y - 1 || nx == x - 1 && ny < y - 1)
	{
		display('|', &nx);
	}
	else if (nx == x - 1 && ny < y - 1)
	{
		display('|', &nx);
	}
	else if (nx > 0 && ny > 0 && nx < x - 1 && ny < y - 1)
	{
		display(' ', &nx);
	}
	else
	{
		display('-', &nx);
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
