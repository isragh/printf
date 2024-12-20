/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:04:04 by isrgonza          #+#    #+#             */
/*   Updated: 2024/12/04 11:16:59 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_strlen(char *str);
int	ft_putstr(char *str);
int	ft_pointer(size_t n, char *base);
int	ft_putnbr(int nbr);
int	ft_putnbr_uns(unsigned int nbr);
int	ft_putnbr_hex(unsigned int n, char *base);
// int	ft_param(char format, va_list arg);
int	ft_printf(const char *format, ...);

#endif
