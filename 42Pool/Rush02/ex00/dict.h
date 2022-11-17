/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:14:35 by lloison           #+#    #+#             */
/*   Updated: 2022/09/18 16:31:51 by lloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H
# include <stdlib.h>

typedef enum e_number
{
	ZERO,
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	ELEVEN,
	TWELVE,
	THIRTEEN,
	FOURTEEN,
	FIFTEEN,
	SIXTEEN,
	SEVENTEEN,
	EIGHTEEN,
	NINETEEN,
	TWENTY,
	THIRTY,
	FORTY,
	FIFTY,
	SIXTY,
	SEVENTY,
	EIGHTY,
	NINETY,
	HUNDRED,
	THOUSAND,
	MILLION,
	BILLION
}	t_number;
typedef struct s_dict
{
	char	**dict;
	char	*lang;
}	t_dict;
t_dict	*initialize_dict(void);
void	free_if_exist(char *str);
int		free_dict(t_dict **dict);
int		free_dict2(t_dict **dict);
int		is_dict_valid(t_dict **dict);
#endif
