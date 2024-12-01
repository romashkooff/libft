/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romashko <romashko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 23:12:11 by romashko          #+#    #+#             */
/*   Updated: 2024/11/29 21:55:18 by romashko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_print_u(unsigned int un_decimal)
{
	unsigned int	count;

	count = 0;
	if (un_decimal > 9)
	{
		count += ft_print_d(un_decimal / 10);
	}
	count += ft_print_c((un_decimal % 10) + '0');
	return (count);
}
