/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xhuang <xhuang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:21:30 by xhuang            #+#    #+#             */
/*   Updated: 2024/10/24 19:51:55 by xhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/**
 * @brief instruction of the function
 * @param format variables taken
 * @return return value
 *
 * @note put some note here
 */
int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *c);
int		ft_putnbr(int c);
int		uint_len(unsigned int n);
char	*ft_utoa(unsigned int c);
int		ft_putunsigned(unsigned int c);
int		ft_hexlen(unsigned int n);
int		ft_puthex(unsigned long n, char c);
int		ft_putpointer(void *ptr);
int		ft_convert(char input, va_list arg);
int		str_len(char *str);
char	*ft_itoa(int n);

#endif