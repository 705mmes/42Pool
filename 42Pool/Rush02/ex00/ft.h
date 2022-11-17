/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametzen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:40:52 by ametzen           #+#    #+#             */
/*   Updated: 2022/09/18 15:45:28 by lloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include "dict.h"

void		read_standard_input(t_dict **dict);
int			ft_error_generic(void);
int			ft_error_dict(void);
int			ft_error_argc(char *prog_name);
int			ft_parse_all(int argc, char **argv,
				long *input_number, t_dict **dict);
int			special_strlen(char *str);
void		ft_write3(long num, t_dict **dict, int *and);
void		ft_putstr(char *str);
char		*ft_strndup(char *str, int n);
long long	ft_atoi(char *str);
void		ft_write_num(long num, t_dict **dict);

#endif
