/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucrooks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 20:21:54 by ucrooks           #+#    #+#             */
/*   Updated: 2019/04/28 20:27:59 by ucrooks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*out;
	unsigned int	i;

	if (s != NULL && f != NULL)
	{
		out = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (out == NULL)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			out[i] = f(i, s[i]);
			i++;
		}
		out[i] = '\0';
		return (out);
	}
	else
		return (NULL);
}
