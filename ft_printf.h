/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrgonza <isrgonza@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:00:20 by isrgonza          #+#    #+#             */
/*   Updated: 2025/02/20 12:00:26 by isrgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(int c);
int		ft_strlen(char *str);
int		ft_putstr(char *str);
int		ft_putnbr(int nbr);
int		ft_putnbr_uns(unsigned int nbr);
int		ft_param(char format, va_list arg);
int		ft_printf(const char *format, ...);
int		ft_putnbr_hex(unsigned int n, char *base);
int		ft_pointer(size_t n, char *base);

#endif
