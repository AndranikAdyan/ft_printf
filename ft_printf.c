/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:01:58 by aadyan            #+#    #+#             */
/*   Updated: 2024/11/07 13:10:54 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	unsigned long long	p;

	p = (unsigned long long)ptr;
	write(1, "0x", 2);
	return (dec_to_hex(p, 1) + 2);
}

int	check_print(char **str, va_list arg)
{
	int	count;

	count = 0;
	if (!*str)
		return (0);
	if (*(*str + 1) == 'd' || *(*str + 1) == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (*(*str + 1) == 'u')
		count += ft_put_unsigned_nbr(va_arg(arg, unsigned int));
	else if (*(*str + 1) == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (*(*str + 1) == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (*(*str + 1) == '%')
		count += ft_putchar('%');
	else if (*(*str + 1) == 'x')
		count += dec_to_hex(va_arg(arg, int), 1);
	else if (*(*str + 1) == 'X')
		count += dec_to_hex(va_arg(arg, int), 0);
	else if (*(*str + 1) == 'p')
		count += print_pointer(va_arg(arg, void *));
	(*str)++;
	return (count);
}

int	ft_printf(char *str, ...)
{
	va_list	arg;
	int		count;

	count = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
			count += check_print(&str, arg);
		else
			count += ft_putchar(*str);
		str++;
	}
	return (count);
}
