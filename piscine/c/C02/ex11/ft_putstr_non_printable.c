/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:00:00 by yourlogin         #+#    #+#             */
/*   Updated: 2025/04/20 21:00:33 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned char c)
{
	char	*hex_digits;
	char	hex[2];

	hex_digits = "0123456789abcdef";
	hex[0] = hex_digits[c / 16];
	hex[1] = hex_digits[c % 16];
	write(1, "\\", 1);
	write(1, &hex[0], 1);
	write(1, &hex[1], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
			print_hex((unsigned char)*str);
		str++;
	}
}
