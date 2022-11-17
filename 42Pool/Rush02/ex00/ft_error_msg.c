/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:27:11 by ametzen           #+#    #+#             */
/*   Updated: 2022/09/18 11:27:14 by ametzen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include"ft.h"

// used for:
// invalid unsigned int input
int	ft_error_generic(void)
{
	ft_putstr("Error\n");
	return (-1);
}

// used for:
// error during dict parsing
// dictionary insufficient to resolve asked input
int	ft_error_dict(void)
{
	ft_putstr("Dict Error\n");
	return (-1);
}

// extra error for: incorrect (not 1 or 2) num of args
int	ft_error_argc(char *prog_name)
{
	ft_putstr("Bad argument count. Usage:\n");
	ft_putstr(prog_name);
	ft_putstr(" <positive number>\n");
	ft_putstr(prog_name);
	ft_putstr(" <path to dictionary file> <positive number>\n");
	return (-1);
}
