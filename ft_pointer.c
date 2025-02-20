/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:59:29 by isrgonza          #+#    #+#             */
/*   Updated: 2025/02/20 11:59:37 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(size_t n, char *base)
{
	size_t	nbr_final[16];
	int		result;
	int		i;

	i = 0;
	result = 0;
	if (n == 0)
		return (write(1, "(nil)", 5));
	result += write(1, "0x", 2);
	while (n)
	{
		nbr_final[i++] = n % 16;
		n /= 16;
	}
	while (i--)
		result += ft_putchar(base[nbr_final[i]]);
	return (result);
}
