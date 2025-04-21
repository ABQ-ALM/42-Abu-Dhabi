/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:33:35 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/21 20:08:19 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Finds the first occurrence of the substring 'to_find' in the string 'str'. */
char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (!*to_find)
        return (str);
    while (str[i])
    {
        j = 0;
        while (to_find[j] && str[i + j] == to_find[j])
            j++;
        if (!to_find[j])
            return (&str[i]);
        i++;
    }
    return (0);
}
