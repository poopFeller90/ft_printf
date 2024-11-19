/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:19:00 by yhajbi            #+#    #+#             */
/*   Updated: 2024/11/06 12:06:17 by yhajbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char *str, ...)
{
	int		count;
	va_list	ptr;

	count = 0;
	va_start(ptr, str);
	while (*str)
	{
		count += ft_switch(&str, ptr);
		str++;
	}
	return (count);
}
