/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:52:54 by yhajbi            #+#    #+#             */
/*   Updated: 2024/11/06 12:59:06 by yhajbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunbri(unsigned int n)
{
	if (n > 9)
	{
		ft_putunbri(n / 10);
		ft_putunbri(n % 10);
	}
	else if (n <= 9)
		ft_putchari(n + 48);
	return (ft_countd(n, 10));
}