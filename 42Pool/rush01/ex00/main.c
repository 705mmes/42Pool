/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:21:45 by smunio            #+#    #+#             */
/*   Updated: 2022/09/11 22:04:01 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	**print_tab_e(char *str, int i, int a);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		**tab_e;
	char	*str;

	str = "Calcul en cours...";
	if (argc == 0)
	{
		return (0);
	}
	tab_e = print_tab_e(argv[1], 0, 0);
	ft_putstr(str);
}
