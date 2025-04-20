/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 01:02:05 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/20 10:44:42 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Returns 1 if the string is empty or contains only alphabetic characters, 0 otherwise.
int ft_str_is_alpha(char *str)
{
    while (*str != '\0')
    {
        if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
            return (0);
        str++;
    }
    return (1);
}
