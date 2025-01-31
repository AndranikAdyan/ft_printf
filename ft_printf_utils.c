/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadyan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:17:16 by aadyan            #+#    #+#             */
/*   Updated: 2025/01/31 22:45:37 by aadyan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		++i;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	int		n;
	char	c;
	int		count;

	if (nb == -2147483648)
		return (write (1, "-2147483648", 11));
	count = 0;
	if (nb < 0)
	{
		count += write(1, "-", 1);
		nb = -nb;
	}
	n = 1;
	while (nb / n >= 10)
		n *= 10;
	while (n > 0)
	{
		c = (nb / n) + '0';
		count += write(1, &c, 1);
		nb = nb % n;
		n /= 10;
	}
	return (count);
}

int	ft_put_unsigned_nbr(unsigned int nb)
{
	unsigned int	n;
	char			c;
	int				count;

	count = 0;
	n = 1;
	while (nb / n >= 10)
		n *= 10;
	while (n > 0)
	{
		c = (nb / n) + '0';
		count += ft_putchar(c);
		nb = nb % n;
		n /= 10;
	}
	return (count);
}

int	dec_to_hex(unsigned long long nb, int lower_case)
{
	int		count;

	count = 0;
	if (lower_case)
	{
		if (nb >= 16)
			count += dec_to_hex(nb / 16, lower_case);
		count += ft_putchar("0123456789abcdef"[nb % 16]);
	}
	else
	{
		count = 0;
		if (nb >= 16)
			count += dec_to_hex(nb / 16, lower_case);
		count += ft_putchar("0123456789ABCDEF"[nb % 16]);
	}
	return (count);
}
