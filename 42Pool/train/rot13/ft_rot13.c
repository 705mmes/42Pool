/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:10:51 by smunio            #+#    #+#             */
/*   Updated: 2022/09/22 16:32:13 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
			argv[1][i] += 13;
		else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
			argv[1][i] -= 13;
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
			argv[1][i] += 13;
		else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
			argv[1][i] -= 13;
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
