/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:16:08 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/21 20:09:11 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Appends up to 'nb' characters from 'src' to the end of 'dest', then null-terminates.*/
*ft_strncat(char *dest, char *src, unsigned int nb)
{
    char *str;
    
    str = dest;
    while (*str)
        str++;
    while (*src && nb)
    {
        *str = *src;
        str++;
        src++;
        nb--;
    }
    *str = '\0';
    return (dest);
}
