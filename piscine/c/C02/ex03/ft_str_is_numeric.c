/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:36:02 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/20 14:03:52 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Returns 1 if the string is empty or contains only numeric characters, 0 otherwise.
int ft_str_is_numeric(char *str)
{
    while (*str != '\0')
    {
        if (*str < '0' || *str > '9')
            return (0);
        str++;
    }
    return (1);
}
