/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:54:19 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/23 17:46:41 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Converts and prints an integer in a given base using the provided base characters */
void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	n;
	int		i, j;

	base_len = 0;
	while (base[base_len])
	{
		if (base[base_len] == '+' || base[base_len] == '-')
			return;
		i = base_len + 1;
		while (base[i])
		{
			if (base[base_len] == base[i])
				return;
			i++;
		}
		base_len++;
	}
	if (base_len < 2)
		return;

	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	write(1, &base[n % base_len], 1);
}
