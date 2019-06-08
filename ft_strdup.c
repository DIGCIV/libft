/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucrooks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 17:49:02 by ucrooks           #+#    #+#             */
/*   Updated: 2019/06/08 20:16:51 by ucrooks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (src == NULL || !(dst))
	{
		dst = NULL;
		return (NULL);
	}
	while (i <= ft_strlen(src))
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
