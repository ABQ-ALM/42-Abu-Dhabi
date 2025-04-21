/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:57:47 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/20 15:14:07 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns 1 if the string contains only printable characters, 0 otherwise.
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}
