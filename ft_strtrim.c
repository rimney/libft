/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:55:33 by rimney            #+#    #+#             */
/*   Updated: 2021/11/09 10:26:48 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_trim_c(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	size_t	len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1) - 1;
	while (len && ft_is_trim_c((char *)set, (char )s1[len]))
		len--;
	while (s1[i] && ft_is_trim_c((char *)set, (char )s1[i]))
		i++;
	return (ft_substr((char *)s1, i, len - i + 1));
}
