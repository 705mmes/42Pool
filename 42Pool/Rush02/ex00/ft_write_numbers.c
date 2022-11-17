/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:50:43 by ametzen           #+#    #+#             */
/*   Updated: 2022/09/17 14:14:03 by lloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include"ft.h"
#include"dict.h"

void	ft_comma_if_necessary(int *is_first_write3, long num)
{
	if (!*is_first_write3 && num != 0)
		write(1, ", ", 2);
	*is_first_write3 = 0;
}

void	ft_write_sub99(long num, t_dict **dict)
{
	long	first_digit;
	long	second_digit;

	if (num < 20)
		ft_putstr((*dict)->dict[num]);
	else
	{
		first_digit = num / 10;
		second_digit = num % 10;
		ft_putstr((*dict)->dict[TWENTY - 2 + first_digit]);
		if (second_digit != 0)
		{
			write(1, "-", 1);
			ft_putstr((*dict)->dict[second_digit]);
		}
	}
}

void	ft_write3(long num, t_dict **dict, int *and)
{
	if (num >= 100)
	{
		ft_write_sub99(num / 100, dict);
		write(1, " ", 1);
		ft_putstr((*dict)->dict[HUNDRED]);
		num %= 100;
		if (*and == 0)
			*and = (num % 10 != 0 || num % 100 != 0);
		if (*and)
			ft_putstr(" and ");
	}
	if (num != 0)
	{
		ft_write_sub99(num, dict);
		num %= 10;
	}
}

void	ft_write_num2(long num, t_dict **dict, int is_first_write3, int and);

void	ft_write_num(long num, t_dict **dict)
{
	long	tmp_num;
	int		is_first_write3;
	int		and;

	and = 0;
	is_first_write3 = 1;
	if (num == 0)
	{
		ft_putstr((*dict)->dict[ZERO]);
		return ;
	}
	if (num >= 1000000000)
	{
		is_first_write3 = 0;
		tmp_num = num / 1000000000;
		ft_write3(tmp_num, dict, &and);
		write(1, " ", 1);
		ft_putstr((*dict)->dict[BILLION]);
		num %= 1000000000;
	}
	ft_write_num2(num, dict, is_first_write3, and);
}

void	ft_write_num2(long num, t_dict **dict, int is_first_write3, int and)
{
	long	tmp_num;

	if (num >= 1000000)
	{
		tmp_num = num / 1000000;
		ft_comma_if_necessary(&is_first_write3, tmp_num);
		ft_write3(tmp_num, dict, &and);
		write(1, " ", 1);
		ft_putstr((*dict)->dict[MILLION]);
		num %= 1000000;
	}
	if (num >= 1000)
	{
		tmp_num = num / 1000;
		ft_comma_if_necessary(&is_first_write3, tmp_num);
		ft_write3(tmp_num, dict, &and);
		write(1, " ", 1);
		ft_putstr((*dict)->dict[THOUSAND]);
		num %= 1000;
	}
	ft_comma_if_necessary(&is_first_write3, num);
	ft_write3(num, dict, &and);
}
