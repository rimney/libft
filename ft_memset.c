/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:05:48 by rimney            #+#    #+#             */
/*   Updated: 2021/11/07 15:30:36 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		*str;

	i = 0;
	str = (unsigned char *)b;
	while (len)
	{
		str[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (str);
}
