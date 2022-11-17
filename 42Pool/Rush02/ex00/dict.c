/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:23:57 by lloison           #+#    #+#             */
/*   Updated: 2022/09/18 15:14:24 by lloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

t_dict	*initialize_dict(void)
{
	t_dict	*output;
	int		i;

	i = 0;
	output = (t_dict *) malloc(sizeof(t_dict));
	output->dict = (char **) malloc (sizeof(char *) * 32);
	while (i < 32)
	{
		output->dict[i] = 0;
		i++;
	}
	return (output);
}

int	free_dict(t_dict **dict)
{
	free_if_exist((*dict)->dict[ZERO]);
	free_if_exist((*dict)->dict[ONE]);
	free_if_exist((*dict)->dict[TWO]);
	free_if_exist((*dict)->dict[THREE]);
	free_if_exist((*dict)->dict[FOUR]);
	free_if_exist((*dict)->dict[FIVE]);
	free_if_exist((*dict)->dict[SIX]);
	free_if_exist((*dict)->dict[SEVEN]);
	free_if_exist((*dict)->dict[EIGHT]);
	free_if_exist((*dict)->dict[NINE]);
	free_if_exist((*dict)->dict[TEN]);
	free_if_exist((*dict)->dict[ELEVEN]);
	free_if_exist((*dict)->dict[TWELVE]);
	free_if_exist((*dict)->dict[THIRTEEN]);
	free_if_exist((*dict)->dict[FOURTEEN]);
	free_if_exist((*dict)->dict[FIFTEEN]);
	free_if_exist((*dict)->dict[SIXTEEN]);
	free_if_exist((*dict)->dict[SEVENTEEN]);
	free_if_exist((*dict)->dict[EIGHTEEN]);
	free_if_exist((*dict)->dict[NINETEEN]);
	free_if_exist((*dict)->dict[TWENTY]);
	free_if_exist((*dict)->dict[THIRTY]);
	free_if_exist((*dict)->dict[FORTY]);
	return (free_dict2(dict));
}

int	free_dict2(t_dict **dict)
{
	free_if_exist((*dict)->dict[FIFTY]);
	free_if_exist((*dict)->dict[SIXTY]);
	free_if_exist((*dict)->dict[SEVENTY]);
	free_if_exist((*dict)->dict[EIGHTY]);
	free_if_exist((*dict)->dict[NINETY]);
	free_if_exist((*dict)->dict[HUNDRED]);
	free_if_exist((*dict)->dict[THOUSAND]);
	free_if_exist((*dict)->dict[MILLION]);
	free_if_exist((*dict)->dict[BILLION]);
	free(*dict);
	return (0);
}

int	is_dict_valid(t_dict **dict)
{
	int	i;

	i = ZERO;
	while (i <= BILLION)
	{
		if ((*dict)->dict[i] == 0)
			return (-1);
		i++;
	}
	return (0);
}

void	free_if_exist(char *str)
{
	if (str != 0)
		free(str);
}
