/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:51:47 by huaydin           #+#    #+#             */
/*   Updated: 2022/11/02 18:16:06 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	return (write(1, &c, 1));
}

void	ft_checker(char c, va_list *ap, int *ptr_len)
{
	unsigned long int	p;

	if (c == 'c')
		*ptr_len += print_char(va_arg(*ap, int));
	if (c == '%')
		*ptr_len += write(1, "%", 1);
	if (c == 'd' || c == 'i')
		*ptr_len += print_number(va_arg(*ap, int));
	if (c == 'u')
		*ptr_len += print_unb(va_arg(*ap, unsigned int));
	if (c == 'x' || c == 'X')
		print_hex(va_arg(*ap, unsigned int), c, ptr_len);
	if (c == 'p')
	{
		p = va_arg(*ap, unsigned long int);
		if (!p)
			*ptr_len += print_str((char *)PTR_NULL);
		else
		{
			*ptr_len += write(1, "0x", 2);
			*ptr_len += print_adr(p);
		}
	}
	if (c == 's')
		*ptr_len += print_str(va_arg(*ap, char *));
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
		{
			ft_checker(*(format + 1), &ap, ptr_len);
			format++;
		}
		format++;
	}
	va_end(ap);
	return (len);
}
