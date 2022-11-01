/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huaydin <huaydin@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:52:48 by huaydin           #+#    #+#             */
/*   Updated: 2022/11/01 10:52:51 by huaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	//ft_printf("d=%d=", 232322);
	//ft_printf("d=%d=", ft_printf("p=%p=", 123323));
	//ft_printf("d=%d\n",ft_printf(NULL));
	ft_printf("d=%d\n", ft_printf("%p\n", NULL));
	//ft_printf("d=%d=", ft_printf(".%s.", "heee"));
	//printf ("d=%d",printf("%s",NULL));
	//printf("d=%d\n",printf("aa=%s %c\n", "1234", 76));
	return (0);
}
