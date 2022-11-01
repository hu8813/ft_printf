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
	//ft_printf("d=%d\n",ft_printf(NULL));
	ft_printf("d=%p", ft_printf("%p", NULL));
	//printf ("d=%d",printf("%s",NULL));
	//printf("d=%s\n",printf(NULL));
	return (0);
}
