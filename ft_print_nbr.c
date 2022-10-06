/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:03:01 by sfidan            #+#    #+#             */
/*   Updated: 2022/08/07 14:03:30 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int nbr)
{
	if (nbr == -2147483648)
		return (ft_print_str("-2147483648"));
	if (nbr < 0)
		return (ft_print_char('-') + ft_print_nbr(-nbr));
	if (nbr > 9)
		return (ft_print_nbr(nbr / 10) + ft_print_nbr(nbr % 10));
	return (ft_print_char(nbr + '0'));
}
