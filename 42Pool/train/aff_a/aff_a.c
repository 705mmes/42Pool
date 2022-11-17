/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:56:49 by smunio            #+#    #+#             */
/*   Updated: 2022/09/21 11:27:18 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int	a;

	a = 0;
	i = 0;
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == 'a')
		{
			write(1, "a\n", 2);
			return (0);
		}
		i++;
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == 'a')
			i++;
		else
		{
			write(1, "\n", 1);
			return (0);
		}
	}
	return (0);
}
