/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:08:48 by rimney            #+#    #+#             */
/*   Updated: 2021/11/09 10:24:52 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	*str;

	len = 0;
	str = (unsigned char *)s;
	if ((char)c == '\0')
	{
		while (str[len])
			len++;
		return ((char *)&str[len]);
	}
	while (str[len])
		len++;
	while (len >= 0)
	{
		if ((char)c == str[len])
			return ((char *)&str[len]);
		len--;
	}
	return (0);
}
