/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 19:09:46 by cazheng           #+#    #+#             */
/*   Updated: 2018/07/09 15:31:49 by cazheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t p;

	p = 0;
	while (p < n)
	{
		((char*)dst)[p] = ((char*)src)[p];
		if (((char*)dst)[p] == (char)c)
			return (&dst[p + 1]);
		p++;
	}
	return (0);
}
