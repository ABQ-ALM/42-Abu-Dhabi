/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:46:38 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/21 15:42:10 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Compares strings character by character and returns negative, positive, or zero */
   int	ft_strncmp(char *s1, char *s2, unsigned int n)
   {
       while (n > 0 && *s1 && *s1 == *s2)
       {
           s1++;
           s2++;
           n--;
       }
       if (n == 0)
           return (0);
       return (*s1 - *s2);
   }
