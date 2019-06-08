/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucrooks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 20:44:54 by ucrooks           #+#    #+#             */
/*   Updated: 2019/04/28 21:29:53 by ucrooks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;

	if (s != NULL)
	{
		out = (char*)malloc(sizeof(char) * len + 1);
		if (out == NULL)
			return (NULL);
		i = 0;
		while (i < len)
		{
			out[i] = s[start + i];
			i++;
		}
		out[i] = '\0';
		return (out);
	}
	return (NULL);
}
