/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:47:31 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/21 18:15:27 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Takes 2 strings and concatenates the second string onto the first and returns it */
char	*ft_strcat(char *dest, char *src)
{
	char	*str;

	str = dest;
	while (*str)
		str++;
	while (*src)
	{
		*str = *src;
		str++;
		src++;
	}
	*str = '\0';
	return (dest);
}
