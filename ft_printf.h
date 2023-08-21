/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:12:03 by sadoming          #+#    #+#             */
/*   Updated: 2023/08/21 20:02:43 by sadoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

//void	ft_bzero(void *s, size_t n);
int		ft_hexmin_cnv(unsigned int nbr);
int		ft_hexmax_cnv(unsigned int nbr);
char	*ft_itoa(int n);
int		ft_printf(char const *str, ...);
int		ft_printnbr(int nbr);
int		ft_putstr(char *str);

#endif
