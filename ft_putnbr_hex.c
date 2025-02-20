/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:02:19 by isrgonza          #+#    #+#             */
/*   Updated: 2025/02/20 12:02:21 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int n, char *base)
{
	int	nbr_final[16];
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (n == 0)
		result += ft_putchar('0');
	while (n)
	{
		nbr_final[i] = n % 16;
		n = n / 16;
		i++;
	}
	while (--i >= 0)
		result += ft_putchar(base[nbr_final[i]]);
	return (result);
}
