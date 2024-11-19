/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:16:46 by yhajbi            #+#    #+#             */
/*   Updated: 2024/11/09 12:51:38 by yhajbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

# define U_HEX "0123456789ABCDEF"
# define L_HEX "0123456789abcdef"

int	ft_putchari(char c);
int	ft_strleni(char *str);
int	ft_putstri(char *str);
int	ft_countd(unsigned long n, int base);
int	ft_putnbri(int n);
int	ft_putunbri(unsigned int n);
int	ft_flags(char **str, va_list c_ptr);
int	ft_printmemory(void *ptr);
int	ft_printhex(unsigned int n, int flag);
int	ft_handle_specifier(char **str, va_list ptr);
int	ft_switch(char **str, va_list ptr);
int	ft_printf(char *str, ...);

#endif
