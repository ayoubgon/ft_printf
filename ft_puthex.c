/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adehbi <adehbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:48:17 by adehbi            #+#    #+#             */
/*   Updated: 2024/11/22 17:36:11 by adehbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long nbr, char *hex, int *len)
{
	if (nbr < 0)
	{
		*len += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 16)
		ft_puthex(nbr / 16, hex, len);
	*len += ft_putchar(hex[nbr % 16]);
}
