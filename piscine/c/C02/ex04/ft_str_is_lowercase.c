/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:08:40 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/20 14:22:49 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Returns 1 if the string is empty or contains only lowercase letters, 0 otherwise.
int ft_str_is_lowercase(char *str)
{
    while (*str != '\0')
    {
        if (*str < 'a' || *str > 'z')
            return (0);
        str++;
    }
    return (1);
}
