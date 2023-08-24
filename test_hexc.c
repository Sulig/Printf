/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_hexc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:05:17 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/24 20:23:01 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_printf.h"

void	test_hexc(void)
{
	cc('Y');
	printf("~ Testing \"%%x\" and \"%%X\" cases:\n");
	/**/
	cc('B');
	printf("*~ \"%%x\" ~");
	cc('W');
	printf("\n");
	resume(6, look4ko(ft_printf("%x\n", 1), printf("%x\n", 1)), look4ko(ft_printf("%x\n", 0), printf("%x\n", 0)), look4ko(ft_printf("%x\n", -1), printf("%x\n", -1)), look4ko(ft_printf("%x\n", 15), printf("%x\n", 15)), look4ko(ft_printf("%x\n", 16), printf("%x\n", 16)), look4ko(ft_printf("%x\n", 255), printf("%x\n", 255)));
	/**/
	cc('B');
	printf("*~ \"%%X\" ~");
	cc('W');
	printf("\n");
	resume(6, look4ko(ft_printf("%X\n", 1), printf("%X\n", 1)), look4ko(ft_printf("%X\n", 0), printf("%X\n", 0)), look4ko(ft_printf("%X\n", -1), printf("%X\n", -1)), look4ko(ft_printf("%X\n", 15), printf("%X\n", 15)), look4ko(ft_printf("%X\n", 16), printf("%X\n", 16)), look4ko(ft_printf("%X\n", 255), printf("%X\n", 255)));
	/**/
}
