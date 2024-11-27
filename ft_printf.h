/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adehbi <adehbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:50:36 by adehbi            #+#    #+#             */
/*   Updated: 2024/11/22 17:34:44 by adehbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
void	ft_puthex(unsigned long adr, char *hex, int *len);
int		ft_putstr(char *str);
void	ft_putnbr(int nb, int *len);
int		ft_putfun(va_list arg, char s);
void	ft_putunsignednbr(unsigned int nb, int *len);
void	ft_putadr(unsigned long nbr, int *len);

#endif
