/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:03:08 by smunio            #+#    #+#             */
/*   Updated: 2022/09/21 14:56:47 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{  
    int i;
    int diff;

    (void)argc;
    i = 0;
    while (argv[1][i])
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            diff = 0;
            while (diff <= argv[1][i] - 'a')
            {
                ft_putchar(argv[1][i]);
                diff++;
            }
        }    
            
        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            diff = 0;
            while (diff <= argv[1][i] - 'A')
            {
                ft_putchar(argv[1][i]);
                diff++;
            }
        }
        i++;
    }
    return (0);
}