/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableau.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 18:53:12 by smunio            #+#    #+#             */
/*   Updated: 2022/09/11 22:03:15 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	tab_up(int **tab, char *str, int i, int a);
void	tab_down(int **tab, char *str, int i, int a);
void	tab_left(int **tab, char *str, int i, int a);
void	tab_right(int **tab, char *str, int i, int a);

int	**print_tab_e(char *str, int i, int a)
{
	int	**tab;

	str = "";
	tab = (int **) malloc(sizeof(int *) * 6);
	while (a != 6)
	{
		tab[a] = (int *) malloc(sizeof(int) * 6);
		a++;
	}
	tab[0][5] = ' ';
	tab[5][5] = ' ';
	tab[5][0] = ' ';
	tab[0][0] = ' ';
	i = 0;
	a = 0;
	return (0);
}

void	tab_up(int **tab, char *str, int i, int a)
{
	i = 0;
	a = 1;
	while (str[i])
	{	
		if (str[i] != ' ')
		{
			if ((str[i] >= '0' && str[i] <= '9') && i <= 6)
			{
				tab[0][a] = str[i];
			}
			else if (i > 6)
				tab_down(tab, str, i, a);
			a++;
		}
		i++;
	}
}

void	tab_down(int **tab, char *str, int i, int a)
{
	i = 6;
	a = 1;
	while (str[i])
	{	
		if (str[i] != ' ')
		{
			if ((str[i] >= '0' && str[i] <= '9') && i <= 12)
			{
				tab[5][a] = str[i];
			}
			else if (i > 12)
				tab_left(tab, str, i, a);
			a++;
		}
		i++;
	}
}

void	tab_left(int **tab, char *str, int i, int a)
{
	i = 12;
	a = 1;
	while (str[i])
	{	
		if (str[i] != ' ')
		{
			if ((str[i] >= '0' && str[i] <= '9') && i <= 18)
			{
				tab[a][0] = str[i];
			}
			else if (i > 18)
				tab_right(tab, str, i, a);
			a++;
		}
		i++;
	}
}

void	tab_right(int **tab, char *str, int i, int a)
{
	i = 18;
	a = 1;
	while (str[i])
	{	
		if (str[i] != ' ')
		{
			if ((str[i] >= '0' && str[i] <= '9') && i <= 24)
			{
				tab[a][5] = str[i];
			}
			a++;
		}
		i++;
	}
}
