/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romashko <romashko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 23:11:58 by romashko          #+#    #+#             */
/*   Updated: 2024/11/29 21:55:08 by romashko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_print_d(int decimal)
{
	int		count;
	long	num;

	num = decimal;
	count = 0;
	if (num < 0)
	{
		count += ft_print_c('-');
		num = -num;
	}
	if (num > 9)
	{
		count += ft_print_d(num / 10);
	}
	count += ft_print_c((num % 10) + '0');
	return (count);
}
