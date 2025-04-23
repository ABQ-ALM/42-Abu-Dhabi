/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 21:01:09 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/21 09:56:36 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_memory(char *str, int size)
{
    int i;
    int j;

    i = 0;
    j = 0;

    if (size == 0)
        return;
    
    while (*str) 
    {   
        if (i % 16 == 0)
            write (1, '\n', 1);
           
        if (!(*str >= 32 && *str <= 126))
            write (1, '.', 1); 
        
        if (j == 2)
        {
            write (1, ' ', 1);
            j = 0
        }
        
        i++;
        j++;
        
    }
}