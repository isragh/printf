/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:00:44 by isrgonza          #+#    #+#             */
/*   Updated: 2025/02/20 12:00:46 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	unsigned int	n;

	n = 0;
	if (nbr == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nbr < 0)
	{
		n += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		n += ft_putnbr(nbr / 10);
		n += ft_putchar(nbr % 10 + '0');
	}
	else
		n += ft_putchar(nbr + '0');
	return (n);
}
