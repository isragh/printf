/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:01:45 by isrgonza          #+#    #+#             */
/*   Updated: 2025/02/20 12:01:47 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_param(char format, va_list arg)
{
	if (format == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (format == 'p')
		return (ft_pointer(va_arg(arg, size_t), "0123456789abcdef"));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (format == 'u')
		return (ft_putnbr_uns(va_arg(arg, unsigned int)));
	else if (format == 'x')
		return (ft_putnbr_hex(va_arg(arg, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_putnbr_hex(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	else if (format == '%')
		return (ft_putchar('%'));
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		result;

	va_start(arg, format);
	result = 0;
	while (*format)
	{
		if (*format == '%')
			result += ft_param(*(++format), arg);
		else
			result += write(1, format, 1);
		format++;
	}
	va_end(arg);
	return (result);
}
