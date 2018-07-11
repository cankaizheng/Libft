/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 21:12:12 by cazheng           #+#    #+#             */
/*   Updated: 2018/07/02 21:40:47 by cazheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;
	int				j;

	j = 0;
	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i] == s2[j] && s1[i] && i < n)
		{
			i++;
			j++;
		}
		if (!s2[j])
			return ((char *)&s1[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}
