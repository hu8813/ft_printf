/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:52:03 by huaydin           #+#    #+#             */
/*   Updated: 2022/11/01 10:52:25 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>

# if defined (__APPLE__)
#  define PTR_NULL "0x0"
# elif __linux__
#  define PTR_NULL "(nil)"
# else
#  define PTR_NULL "(nil)"
# endif

int	print_number(int nb);
int	print_char(char c);
int	ft_checker(char c, va_list *ptr);
int	print_adr(unsigned long int nb);
int	print_unb(unsigned int nb);
int	print_hex(unsigned int nb, int s);
int	print_str(char *str);
int	ft_printf(const char *format, ...);
#endif
