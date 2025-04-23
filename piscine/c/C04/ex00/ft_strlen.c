/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:00:51 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/23 10:13:54 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Calculates and returns the length of a string */
int	ft_strlen(char *str)
{
	int	len ;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
