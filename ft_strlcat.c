/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucrooks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 22:25:12 by ucrooks           #+#    #+#             */
/*   Updated: 2019/04/04 20:17:01 by ucrooks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dlen;

	i = 0;
	dlen = 0;
	while (dst[dlen] && dlen < size)
		dlen++;
	while ((src[i] && (dlen + i + 1) < size))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dlen != size)
		dst[dlen + i] = '\0';
	return (dlen + ft_strlen(src));
}
