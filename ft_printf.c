/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:19:00 by yhajbi            #+#    #+#             */
/*   Updated: 2024/11/19 22:13:12 by yhajbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* ft_printf:
 * Initializes ptr with the arguments and calls
 * ft_switch that checks for specifiers or just
 * printf the characters from *str */

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	ptr;

	count = 0;
	va_start(ptr, str);
	while (*str)
	{
		count += ft_switch((char **)&str, ptr);
		str++;
	}
	return (count);
}
