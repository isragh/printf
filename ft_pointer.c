/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:34:40 by isrgonza          #+#    #+#             */
/*   Updated: 2024/12/04 13:15:14 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(size_t n, char *base)
{
	int	result;

	result = 0;
	if (n == 0)
		return (write(1, "0x0", 3));
	result += write(1, "0x", 2);
	if (n > 0)
	{
		if (n / 16)
			result += ft_pointer(n / 16, base);
		result += ft_putchar(base[n % 16]);
	}
	return (result);
}
