/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:52:48 by huaydin           #+#    #+#             */
/*   Updated: 2022/11/02 15:04:00 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	//ft_printf("d=%d=", 232322);
	//ft_printf("d=%d=", ft_printf("p=%p=", 123323));
	//ft_printf("d=%d\n",ft_printf(NULL));
	ft_printf("d=%d\n", ft_printf("%d\n", INT_MIN));
	printf("d=%d\n", printf("%d\n", INT_MIN));
	//ft_printf("d=%d=", ft_printf(".%s.", "heee"));
	//printf ("d=%d",printf("%s",NULL));
	//printf("d=%d\n",printf("aa=%s %c\n", "1234", 76));
	return (0);
}
