/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:18:00 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/20 17:18:26 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts all lowercase letters in the string to uppercase.
char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*temp = *str - 32;
		str++;
        temp++;
	}
	return (temp);
}
