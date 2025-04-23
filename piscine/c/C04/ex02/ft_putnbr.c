/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:43:11 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/23 15:47:01 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Prints the integer passed as parameter to standard output */
void ft_putnbr(int nb)
{
    char digit[10];
    int i;

    i = 0;
    if (nb == 0)
    {
        write(1, "0", 1);
        return;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    while (nb > 0)
    {
        digit[i] = nb % 10 + '0';
        nb /= 10;
        i++;
    }
    while (i > 0)
    {
        i--;
        write(1, &digit[i], 1);
    }
}
