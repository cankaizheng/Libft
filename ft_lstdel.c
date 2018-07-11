/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 20:55:48 by cazheng           #+#    #+#             */
/*   Updated: 2018/07/07 21:13:48 by cazheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new;

	if (!alst)
		return ;
	while (*alst)
	{
		new = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = new;
	}
	alst = NULL;
}
