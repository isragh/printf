/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:01:07 by isrgonza          #+#    #+#             */
/*   Updated: 2025/02/20 12:01:10 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_uns(unsigned int nbr)
{
	int	n;

	n = 0;
	if (nbr > 9)
	{
		n += ft_putnbr_uns(nbr / 10);
	}
	return (n += ft_putchar(nbr % 10 + '0'));
}
