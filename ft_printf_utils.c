/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:52:37 by huaydin           #+#    #+#             */
/*   Updated: 2022/11/02 21:36:20 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *ptr_len)
{
	*ptr_len += write(1, &c, 1);
}

void	print_number(int nb, int *ptr_len)
{
	if (nb == -2147483648)
		*ptr_len += write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-', ptr_len);
		nb *= -1;
	}
	if (nb >= 10)
	{
		print_number(nb / 10, ptr_len);
		print_number(nb % 10, ptr_len);
	}
	if (nb < 10 && nb >= 0)
		ft_putchar(nb + '0', ptr_len);
}

void	print_address(unsigned long int nb, int *ptr_len)
{
	if (nb >= 16)
	{
		print_address(nb / 16, ptr_len);
		print_address(nb % 16, ptr_len);
	}
	if (nb < 16)
	{
		if (nb < 10)
			ft_putchar(nb + '0', ptr_len);
		else
			ft_putchar(nb + 'a' - 10, ptr_len);
	}
}

void	print_unsigned(unsigned int nb, int *ptr_len)
{
	if (nb >= 10)
	{
		print_unsigned(nb / 10, ptr_len);
		print_unsigned(nb % 10, ptr_len);
	}
	if (nb < 10)
		ft_putchar(nb + '0', ptr_len);
}

void	print_hexademical(unsigned int nb, char c, int *ptr_len)
{
	if (nb >= 16)
	{
		print_hexademical(nb / 16, c, ptr_len);
		print_hexademical(nb % 16, c, ptr_len);
	}
	if (nb < 16)
	{
		if (nb < 10)
			ft_putchar(nb + '0', ptr_len);
		else if (c == 'x' && nb >= 10)
			ft_putchar(nb + 'a' - 10, ptr_len);
		else if (c == 'X' && nb >= 10)
			ft_putchar(nb + 'A' - 10, ptr_len);
	}
}
