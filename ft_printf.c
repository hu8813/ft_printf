/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:51:47 by huaydin           #+#    #+#             */
/*   Updated: 2022/11/02 19:47:23 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_str(char *str, int *ptr_len)
{
	if (!str)
		str = "(null)";
	while (*str)
		*ptr_len += write(1, str++, 1);
}

void	ft_switch(char c, va_list *ap, int *ptr_len)
{
	unsigned long int	p;

	if (c == 'c')
		print_char(va_arg(*ap, int), ptr_len);
	if (c == '%')
		*ptr_len += write(1, "%", 1);
	if (c == 'd' || c == 'i')
		print_number(va_arg(*ap, int), ptr_len);
	if (c == 'u')
		print_unb(va_arg(*ap, unsigned int), ptr_len);
	if (c == 'x' || c == 'X')
		print_hex(va_arg(*ap, unsigned int), c, ptr_len);
	if (c == 'p')
	{
		p = va_arg(*ap, unsigned long int);
		if (!p)
			print_str((char *)PTR_NULL, ptr_len);
		else
		{
			*ptr_len += write(1, "0x", 2);
			print_adr(p, ptr_len);
		}
	}
	if (c == 's')
		print_str(va_arg(*ap, char *), ptr_len);
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
			ft_switch(*(format++ + 1), &ap, ptr_len);
		format++;
	}
	va_end(ap);
	return (len);
}
