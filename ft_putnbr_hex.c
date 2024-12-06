/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:20:14 by isrgonza          #+#    #+#             */
/*   Updated: 2024/12/04 13:24:42 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned int n, char *base)
{
	int	result;

	result = 0;
	if (n >= 16)
		result += ft_putnbr_hex(n / 16, base);
	result += ft_putchar(base[n % 16]);
	return (result);
}
