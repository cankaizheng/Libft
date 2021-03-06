/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:56:49 by cazheng           #+#    #+#             */
/*   Updated: 2018/07/10 17:35:50 by cazheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstrl(char const *s)
{
	if (!s)
		return ;
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}
