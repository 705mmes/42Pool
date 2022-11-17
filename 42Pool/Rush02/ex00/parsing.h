/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloison <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:37:00 by lloison           #+#    #+#             */
/*   Updated: 2022/09/18 13:00:05 by lloison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

int			get_corresponding_index(long long nb);
char		*get_name(char *buf);
long long	get_number(char *buf);
int			parse_line(char *buf, t_dict **dict);
int			get_next_line(int fd, char *buf);
int			parsing(t_dict **dict, char *filename);
#endif
