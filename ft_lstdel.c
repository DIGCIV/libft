/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucrooks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 21:06:21 by ucrooks           #+#    #+#             */
/*   Updated: 2019/05/10 21:17:41 by ucrooks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list		*list;
	t_list		*next;

	if (alst != NULL && del != NULL)
	{
		list = *alst;
		while (list != NULL)
		{
			next = list->next;
			del(list->content, list->content_size);
			free(list);
			list = next;
		}
		*alst = NULL;
	}
}
