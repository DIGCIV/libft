/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucrooks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 23:24:55 by ucrooks           #+#    #+#             */
/*   Updated: 2019/04/10 15:57:46 by ucrooks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	i = 0;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		dest = (unsigned char *)dst + len - 1;
		source = (unsigned char *)src + len - 1;
		while (i < len)
		{
			*(dest--) = *(source--);
			i++;
		}
	}
	return (dst);
}
