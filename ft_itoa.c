/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucrooks <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 20:30:45 by ucrooks           #+#    #+#             */
/*   Updated: 2019/06/07 21:18:07 by ucrooks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_signcheck(int n)
{
	int		sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	return (sign);
}

static int		ft_capacity(int n)
{
	int		capacity;

	capacity = 1;
	while (n > 0)
	{
		capacity++;
		n /= 10;
	}
	return (capacity);
}

static char		*ft_fill(char *str, long num, int sign)
{
	int		i;

	i = 0;
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	if (sign < 0)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char		*ft_strrev(char *str)
{
	char	*rev;
	size_t	len;
	int		i;

	len = ft_strlen(str);
	i = 0;
	rev = (char*)malloc(sizeof(char) * len + 1);
	if (rev == NULL)
		return (NULL);
	while (len > 0)
	{
		rev[i] = str[len - 1];
		i++;
		len--;
	}
	rev[i] = '\0';
	return (rev);
}

char			*ft_itoa(int n)
{
	char	*snum;
	int		capacity;
	int		sign;
	int		i;
	long	num;

	sign = ft_signcheck(n);
	num = n;
	num *= sign;
	i = 0;
	capacity = ft_capacity(n);
	snum = (char*)malloc(sizeof(char) * capacity + 2);
	if (snum == NULL)
		return (NULL);
	if (num == 0)
		ft_strcpy(snum, "0");
	else
	{
		snum = ft_fill(snum, num, sign);
		return (ft_strrev(snum));
	}
	return (snum);
}
