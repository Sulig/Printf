/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:44:32 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/24 19:12:19 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numcnt(size_t n, int base)
{
	int		cnt;

	cnt = 0;
	while (n > 0)
	{
		cnt++;
		n /= base;
	}
	return (cnt);
}

char	*ft_itoa(int n, char *base)
{
	char	*str;
	int		cnt;
	long	num;

	cnt = 0;
	num = (long) n;
	if (n <= 0)
	{
		num *= -1;
		cnt++;
	}
	cnt += ft_numcnt(num, 10);
	str = calloc(cnt + 1, 1);
	if (!str)
		return (0);
	while (cnt > 0)
	{
		str[--cnt] = base[num % 10];
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa_unsig(size_t num, char *base)
{
	char	*str;
	int		cnt;

	cnt = 0;
	if (num == 0)
		cnt++;
	cnt += ft_numcnt(num, 16);
	str = calloc(cnt + 1, 1);
	if (!str)
		return (0);
	while (cnt > 0)
	{
		str[--cnt] = base[num % 16];
		num /= 16;
	}
	return (str);
}
