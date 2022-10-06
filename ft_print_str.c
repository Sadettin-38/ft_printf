/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:07:08 by sfidan            #+#    #+#             */
/*   Updated: 2022/08/07 14:07:36 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	if (!str)
		return (ft_print_str("(null)"));
	if (!*str)
		return (0);
	return (ft_print_char(*str) + ft_print_str(str + 1));
}
