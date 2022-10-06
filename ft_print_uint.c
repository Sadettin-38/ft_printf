/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:09:21 by sfidan            #+#    #+#             */
/*   Updated: 2022/08/07 14:10:27 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uint(unsigned int nbr)
{
	if (nbr > 9)
		return (ft_print_uint(nbr / 10) + ft_print_uint(nbr % 10));
	return (ft_print_char(nbr + '0'));
}
