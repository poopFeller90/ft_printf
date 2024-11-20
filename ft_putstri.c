/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:50:10 by yhajbi            #+#    #+#             */
/*   Updated: 2024/11/19 03:02:30 by yhajbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstri(char *str)
{
	int	count;

	if (!str)
		return (ft_putstri("(null)"));
	count = ft_strlen(str);
	while (*str)
		ft_putchari(*str++);
	return (count);
}
