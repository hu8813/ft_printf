/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:52:37 by huaydin           #+#    #+#             */
/*   Updated: 2022/11/02 18:56:27 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number(int nb)
{
	long long	n;
	int			len;

	n = nb;
	len = 0;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		len += print_number(n / 10);
		len += print_number(n % 10);
	}
	if (n < 10)
		len += print_char(n + '0');
	return (len);
}

int	print_adr(unsigned long int nb)
{
	int		len;
	char	c;

	len = 0;
	if (nb >= 16)
	{
		len += print_adr(nb / 16);
		len += print_adr(nb % 16);
	}
	if (nb < 16)
	{
		if (nb < 10)
		{
			c = nb + '0';
			len += write(1, &c, 1);
		}
		else
		{
			c = nb + 'a' - 10;
			len += write(1, &c, 1);
		}
	}
	return (len);
}

int	print_unb(unsigned int nb)
{
	int		len;
	char	c;

	len = 0;
	if (nb >= 10)
	{
		len += print_unb(nb / 10);
		len += print_unb(nb % 10);
	}
	if (nb < 10)
	{
		c = nb + '0';
		len += write(1, &c, 1);
	}	
	return (len);
}

void	print_hex(unsigned int nb, char c, int *ptr_len)
{
	char	ch;

	if (nb >= 16)
	{
		print_hex(nb / 16, c, ptr_len);
		print_hex(nb % 16, c, ptr_len);
	}
	if (nb < 16)
	{
		if (nb < 10)
		{
			ch = nb + '0';
			*ptr_len += write(1, &ch, 1);
		}
		else if (c == 'x' && nb >= 10)
		{
				ch = nb + 'a' - 10;
				*ptr_len += write(1, &ch, 1);
		}	
		else if (c == 'X' && nb >= 10)
		{
				ch = nb + 'A' - 10;
				*ptr_len += write(1, &ch, 1);
		}
	}
}

int	print_str(char *str)
{
	int	len;

	len = 0;
	if (!str)
		str = "(null)";
	while (*str)
		len += write(1, str++, 1);
	return (len);
}
