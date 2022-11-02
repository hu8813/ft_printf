/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:52:03 by huaydin           #+#    #+#             */
/*   Updated: 2022/11/02 19:48:12 by huaydin          ###   ########.fr       */
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

void	print_number(int nb, int *ptr_len);
void	print_char(char c, int *ptr_len);
void	ft_switch(char c, va_list *ap, int *ptr_len);
void	print_adr(unsigned long int nb, int *ptr_len);
void	print_unb(unsigned int nb, int *ptr_len);
void	print_hex(unsigned int nb, char c, int *ptr_len);
void	print_str(char *str, int *ptr_len);
int		ft_printf(const char *format, ...);
#endif
