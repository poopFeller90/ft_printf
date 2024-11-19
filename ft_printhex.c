/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:55:01 by yhajbi            #+#    #+#             */
/*   Updated: 2024/11/08 15:22:02 by yhajbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printhex(unsigned int n, int flag)
{
	int		dg;
	int		i;
	char	*buffer;

	dg = ft_countd(n, 16);
	i = dg - 1;
	buffer = malloc((dg + 1) * sizeof(char));
	buffer[i + 1] = '\0';
	if (!n)
		return (free(buffer), ft_putstri("0\0"), dg);
	while (n > 0)
	{
		if (flag)
		{
			buffer[i--] = U_HEX[n % 16];
			n /= 16;
		}
		else if (!flag)
		{
			buffer[i--] = L_HEX[n % 16];
			n /= 16;
		}
	}
	ft_putstri(buffer);
	return (free(buffer), dg);
}
