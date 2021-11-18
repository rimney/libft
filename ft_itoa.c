/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:41:48 by rimney            #+#    #+#             */
/*   Updated: 2021/11/08 20:14:16 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int nb)
{
	size_t	i;

	i = 1;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 9)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static int	ft_div(int len)
{
	int	i;

	i = 1;
	if (len == 1)
		return (1);
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

static void	ft_assign(char *c, int *nb, int *i, int *len)
{
	c[0] = '-';
	*nb *= -1;
	*i = *i + 1;
	*len = *len - 1;
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		len2;
	char	*str;

	i = -1;
	len = ft_len(n);
	len2 = len;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		ft_assign(str, &n, &i, &len);
	while (++i < len2)
	{
		str[i] = ((n / ft_div(len) % 10) + '0');
		len--;
	}
	str[i] = '\0';
	return (str);
}
