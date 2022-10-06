/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:04:55 by sfidan            #+#    #+#             */
/*   Updated: 2022/08/07 14:06:54 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_rest(unsigned long long p)
{
	if (p > 15)
		return (ft_ptr_rest(p / 16) + ft_ptr_rest(p % 16));
	return (ft_print_char("0123456789abcdef"[p]));
}

int	ft_print_ptr(unsigned long long ptr)
{
	return (ft_print_str("0x") + ft_ptr_rest(ptr));
}
