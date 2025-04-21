/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:49:46 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/20 17:55:49 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function takes uppercase letters and converts them to lowercase.
char    *ft_strlowcase(char *str)
{
    char *temp;

    temp = str;
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
            *str = *str + 32;
        str++;
    }
    return (temp);
}
