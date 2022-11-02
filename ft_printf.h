/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:52:03 by huaydin           #+#    #+#             */
/*   Updated: 2022/11/02 21:39:20 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# if defined(__APPLE__)
#  define PTR_NULL "0x0"
# elif __linux__
#  define PTR_NULL "(nil)"
# else
#  define PTR_NULL "(nil)"
# endif

void	ft_putchar(char c, int *ptr_len);
void	ft_putstr(char *str, int *ptr_len);
void	print_number(int nb, int *ptr_len);
void	print_address(unsigned long int nb, int *ptr_len);
void	print_unsigned(unsigned int nb, int *ptr_len);
void	print_hexademical(unsigned int nb, char c, int *ptr_len);
void	ft_format(char c, va_list *ap, int *ptr_len);
int		ft_printf(const char *format, ...);
#endif
