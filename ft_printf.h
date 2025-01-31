/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:51:54 by aadyan            #+#    #+#             */
/*   Updated: 2025/01/31 21:24:53 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_putnbr(int nb);
int		ft_putchar(char c);
int		check_print(const char **str, va_list arg);
int		dec_to_hex(unsigned long long nb, int lower_case);
int		print_pointer(unsigned long long ptr);
int		ft_putstr(char *str);
int		ft_put_unsigned_nbr(unsigned int nb);

#endif