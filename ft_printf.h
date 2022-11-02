/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:52:03 by huaydin           #+#    #+#             */
/*   Updated: 2022/11/02 18:15:35 by huaydin          ###   ########.fr       */
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

int		print_number(int nb);
int		print_char(char c);
void	ft_checker(char c, va_list *ap, int *ptr_len);
int		print_adr(unsigned long int nb);
int		print_unb(unsigned int nb);
void	print_hex(unsigned int nb, char c, int *ptr_len);
int		print_str(char *str);
int		ft_printf(const char *format, ...);
#endif
