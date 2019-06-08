/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucrooks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 20:31:20 by ucrooks           #+#    #+#             */
/*   Updated: 2019/05/11 22:51:22 by ucrooks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*start;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(res = f(lst)))
		return (NULL);
	start = res;
	while (lst->next != NULL)
	{
		lst = lst->next;
		if (!(res->next = f(lst)))
		{
			while (start != NULL)
			{
				res = start->next;
				free(start);
				start = res;
			}
			return (NULL);
		}
		res = res->next;
	}
	return (start);
}
