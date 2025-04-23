/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmheir <aalmheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:49:31 by aalmheir          #+#    #+#             */
/*   Updated: 2025/04/23 19:20:54 by aalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts a string in a given base to its integer representation.
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	sign;
	int	result;
	int	base_len;
	int	digit;

	base_len = 0;
	while (base[base_len])
	{
		if (base[base_len] == '+' || base[base_len] == '-' || base[base_len] <= 32)
			return (0);
		j = base_len + 1;
		while (base[j])
			if (base[base_len] == base[j++])
				return (0);
		base_len++;
	}
	if (base_len < 2)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	result = 0;
	while (*str)
	{
		i = 0;
		while (i < base_len && base[i] != *str)
			i++;
		if (i == base_len)
			break ;
		result = result * base_len + i;
		str++;
	}
	return (result * sign);
}
