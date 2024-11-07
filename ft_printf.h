/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:51:54 by aadyan            #+#    #+#             */
/*   Updated: 2024/11/05 19:14:32 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(char *str, ...);
int		ft_putnbr(int nb);
int		ft_putchar(char c);
int		check_print(char **str, va_list arg);
int		dec_to_hex(unsigned long long nb, int lower_case);
int		print_pointer(void *ptr);
int		ft_putstr(char *str);
int		ft_put_unsigned_nbr(unsigned int nb);

#endif