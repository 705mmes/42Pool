/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:58:28 by smunio            #+#    #+#             */
/*   Updated: 2022/09/22 18:59:03 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argc > 1)
	{
		while (argv[1][i] < 33 || argv[1][i] > 126)
			i++;
		while (argv[1][i] > 32 && argv[1][i] < 127)
		{
			write(1, &argv[1][i], 1);
			if (argv[1][i] < 33 || argv[1][i] > 126)
				break ;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}