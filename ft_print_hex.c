/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:12:21 by sfidan            #+#    #+#             */
/*   Updated: 2022/08/07 14:12:56 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nbr, char fmt)
{
	if (nbr > 15)
		return (ft_print_hex(nbr / 16, fmt) + ft_print_hex(nbr % 16, fmt));
	if (fmt == 'x')
		return (ft_print_char("0123456789abcdef"[nbr]));
	return (ft_print_char("0123456789ABCDEF"[nbr]));
}
