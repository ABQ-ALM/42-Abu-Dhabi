/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 19:15:27 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/20 19:57:36 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies up to size - 1 characters from src to dest, null-terminates dest, and returns the length of src.
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;

	while (src[len] != '\0')
		len++;

	if (size == 0)
		return (len);

	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (len);
}
