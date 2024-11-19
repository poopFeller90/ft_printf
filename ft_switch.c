/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:56:07 by yhajbi            #+#    #+#             */
/*   Updated: 2024/11/07 12:31:17 by yhajbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_switch(char **str, va_list ptr)
{
	int		count;
	va_list	c_ptr;

	count = 0;
	if (**str == '%')
	{
		(*str)++;
		va_copy(c_ptr, ptr);
		count += ft_flags(str, c_ptr);
		count += ft_handle_specifier(str, ptr);
	}
	else
		count += ft_putchari(**str);
	return (count);
}
