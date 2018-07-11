/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 00:29:02 by cazheng           #+#    #+#             */
/*   Updated: 2018/07/08 01:33:09 by cazheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcnt(const char *t, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (t[i] != '\0')
	{
		while (t[i] == c)
			i++;
		if (t[i] != c)
			count++;
		while (t[i] != c && t[i])
			i++;
	}
	return (count);
}
