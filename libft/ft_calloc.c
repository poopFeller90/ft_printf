/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhajbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:04:18 by yhajbi            #+#    #+#             */
/*   Updated: 2024/11/07 09:47:11 by yhajbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*p;

	bytes = nmemb * size;
	if (size && bytes / size != nmemb)
		return (NULL);
	p = malloc(bytes);
	if (!p)
		return (NULL);
	p = ft_memset(p, 48, bytes);
	return (p);
}
