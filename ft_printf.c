/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:51:47 by huaydin           #+#    #+#             */
/*   Updated: 2022/11/02 22:08:06 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *ptr_len)
{
	if (!str)
		str = "(null)";
	while (*str)
		*ptr_len += write(1, str++, 1);
}

void	ft_format(char c, va_list *ap, int *ptr_len)
{
	unsigned long int	p;

	if (c == 'c')
		ft_putchar(va_arg(*ap, int), ptr_len);
	if (c == '%')
		*ptr_len += write(1, "%", 1);
	if (c == 'd' || c == 'i')
		print_number(va_arg(*ap, int), ptr_len);
	if (c == 'u')
		print_unsigned(va_arg(*ap, unsigned int), ptr_len);
	if (c == 'x' || c == 'X')
		print_hexademical(va_arg(*ap, unsigned int), c, ptr_len);
	if (c == 'p')
	{
		p = va_arg(*ap, unsigned long int);
		if (!p)
			ft_putstr((char *)PTR_NULL, ptr_len);
		else
		{
			*ptr_len += write(1, "0x", 2);
			print_address(p, ptr_len);
		}
	}
	if (c == 's')
		ft_putstr(va_arg(*ap, char *), ptr_len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		*ptr_len;
	va_list	ap;

	len = 0;
	ptr_len = &len;
	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
			len += write(1, &*format, 1);
		if (*format == '%')
			ft_format(*++format, &ap, ptr_len);
		format++;
	}
	va_end(ap);
	return (len);
}
/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	ft_printf("d=%d\n", ft_printf("aa %s gae %% ae\n", "aegea %% ae f"));
	printf("len=%d\n", printf("aa %s gae %% ae\n", "aegea %% ae f"));
	ft_printf("len=%d\n", ft_printf("%p\n", NULL));
	printf("len=%d\n", printf("%p\n", NULL));
	ft_printf("len=%d\n", ft_printf("%d\n", INT_MIN));
	printf("len=%d\n", printf("%d\n", INT_MIN));
	return (0);
}
*/