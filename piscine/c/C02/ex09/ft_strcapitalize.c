/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 17:59:44 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/20 19:11:11 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Capitalizes the first letter of each word in the string.
char	*ft_strcapitalize(char *str)
{
	char	*temp;
	int		new_word;

	temp = str;
	new_word = 1;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		if ((*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9'))
		{
			if (new_word && (*str >= 'a' && *str <= 'z'))
				*str -= 32;
			new_word = 0;
		}
		else
			new_word = 1;
		str++;
	}
	return (temp);
}
