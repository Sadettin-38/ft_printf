/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:10:42 by sfidan            #+#    #+#             */
/*   Updated: 2022/08/07 14:12:10 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *fmt, ...);
int	ft_print_format(va_list ap, const char fmt);

int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_uint(unsigned int nbr);
int	ft_print_nbr(int nbr);
int	ft_print_hex(unsigned int nbr, char fmt);

#endif
