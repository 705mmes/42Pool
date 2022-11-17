/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fizz_buzz.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:54:54 by smunio            #+#    #+#             */
/*   Updated: 2022/09/22 20:45:32 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
    write(1, "\n", 1);
}
int ft_putnbr(int nb)
{
    if (nb > 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    if (nb < 10)
        ft_putchar(nb + 48);
    return(nb);
}
int ft_fizz_buzz(int nb)
{
    int i;

    i = 1;
    while (i < nb)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else
            ft_putnbr(nb);
        i++;
    }
    return (0);
}

int main(void)
{
    ft_fizz_buzz(100);
    return (0);
}