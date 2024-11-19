/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:53:29 by yhajbi            #+#    #+#             */
/*   Updated: 2024/11/07 12:51:44 by yhajbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_putflag(char c, int n)
{
	int	count;

	count = 0;
	while (n--)
		count += ft_putchari(c);
	return (count);
}

static int	ft_plus_flag(char **str, int num)
{
	int	count;

	count = 0;
	while (**str == '+')
		(*str)++;
	if (num < 0)
		return (0);
	count += ft_putchari('+');
	return (count);
}

static int	ft_space_flag(char **str, va_list c_ptr)
{
	int	num;
	int	count;
	int	cnt_space;

	num = va_arg(c_ptr, int);
	count = 0;
	cnt_space = ft_atoi(*str);
	while (**str == 32)
		(*str)++;
	if (**str == '+')
		return (ft_plus_flag(str, num));
	if (num > 0)
	{
		while (cnt_space--)
			count += ft_putchari(32);
		(*str)++;
	}
	return (count);
}

static int	ft_hash_flag(char **str, int up)
{
	int	count;

	count = 0;
	(*str)++;
	if (ft_isdigit(**str))
		count += ft_putflag(32, ft_atoi(*str));
	if (up)
		count += ft_putstri("0X");
	else if (!up)
		count += ft_putstri("0x");
	return (count);
}

int	ft_flags(char **str, va_list c_ptr)
{
	int	count;

	count = 0;
	if (**str == '#' && *(*str + 1) == 'x')
		count += ft_hash_flag(str, 0);
	else if (**str == '#' && *(*str + 1) == 'X')
		count += ft_hash_flag(str, 1);
	else if (**str == ' ')
		count += ft_space_flag(str, c_ptr);
	else if (**str == '+')
		count += ft_plus_flag(str, va_arg(c_ptr, int));
	if (**str == '#' && (*(*str + 1) == 'x' || *(*str + 1) == 'X'))
		(*str)++;
	return (count);
}
